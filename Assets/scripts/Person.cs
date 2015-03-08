﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Person : MonoBehaviour {
	public float speed;
	public Vector2 direction;
	public Vector2 destination;
	public Vector2 startPosition;
	public LevelManager levelManager;
	public int intelligence;
	public int waypointCounter = 0;
	public List<Transform> waypoints = new List<Transform>();
	protected Animator animator;
	public Vector2 preference = Vector2.zero;
	
	// Use this for initialization
	public void Start () {
		startPosition = transform.position;
		levelManager = GameObject.FindObjectOfType<LevelManager>();
		animator = GetComponent<Animator>();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void SetDirection(Vector2 direction) {
		this.direction = direction;
		animator.SetFloat("x", direction.x);
		animator.SetFloat("y", direction.y);
	}
	
	public void Reset() {
		transform.position = startPosition;
		destination = Vector2.zero;
		preference = Vector2.zero;
		direction = Vector2.zero;
		animator.SetBool("dead", false);
		animator.SetBool("scare", false);
		animator.SetFloat("x", 0f);
		animator.SetFloat("y", 0f);
		animator.Play("Idle");
		waypointCounter = 0;
	}

	public void findNextDestination(Vector2 finalDestination, bool towards) {
		if (finalDestination != Vector2.zero) {
			Vector2 vectorToPlayer = finalDestination - (Vector2)transform.position;
			Vector2 primaryDirection = Vector2.zero;
			Vector2 secondaryDirection = Vector2.zero;
			Vector2 xDirection = vectorToPlayer.x > 0 ? Vector2.right : -Vector2.right;
			Vector2 yDirection = vectorToPlayer.y > 0 ? Vector2.up : -Vector2.up;
			Vector2 actualDirection = Vector2.zero;
			if (Mathf.Abs(vectorToPlayer.x) > Mathf.Abs (vectorToPlayer.y)) { // horizontal
				primaryDirection = xDirection;
				secondaryDirection = yDirection;
			} else {
				primaryDirection = yDirection;
				secondaryDirection = xDirection;
			}
			
			if (!towards) {
				primaryDirection = -primaryDirection;
				secondaryDirection = -secondaryDirection;
			}
			
			if (valid (primaryDirection) && (Random.Range(1,10) <= intelligence || animator.GetBool("dead")) && primaryDirection != -direction) {
				actualDirection = primaryDirection;
			} else if (valid(secondaryDirection) && (Random.Range(1,10) <= intelligence || animator.GetBool("dead")) && secondaryDirection != -direction) {
				actualDirection = secondaryDirection;
			} else if (valid(direction)) {
				actualDirection = direction;
			} else if (valid (-secondaryDirection)) {
				actualDirection = -secondaryDirection;
			} else if (valid (-primaryDirection)) {
				actualDirection = -primaryDirection;
			} else if (valid(secondaryDirection)) { // if the wrong directions are invalid, go with the right ones
				actualDirection = secondaryDirection;
			} else if (valid(primaryDirection)) {
				actualDirection = primaryDirection;
			}
			SetDirection(actualDirection);
			destination = (Vector2)transform.position + actualDirection;
		}
	}

	bool valid(Vector2 dir) {
		if (dir == Vector2.zero) {
			return false;
		}
		Vector2 pos = (Vector2)transform.position;
		RaycastHit2D[] hits = Physics2D.LinecastAll(pos, pos + dir*.6f);
		for (int i = 0; i < hits.Length; i++) {
			if (hits[i].transform.gameObject.tag == "wall" ||
			    (hits[i].transform.gameObject.tag == "invisible_wall" && waypoints.Count < waypointCounter + 1)) { 
				// you can only go through invisible wall if you're going through your waypoints
				return false;
			}
		}
		return true;
	}
}
