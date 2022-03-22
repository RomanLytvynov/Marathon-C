#!/bin/bash

perl -C -Mutf8 -pe 's/redpill/bluepill/i' $1 | grep -iw bluepill
