#!/bin/bash

ls -Ahl $1 | tail -n +2 | awk '{print $9" "$5}' 
