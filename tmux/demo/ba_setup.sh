#!/usr/bin/sh
set -ev

session_name="Bachelorthesis"

# Only create tmux session if it doesn't already exist
if ! tmux has-session -t $session_name; then
  cd /home/max/current_semester/bachelorarbeit/
  # Start New Session with our name
  tmux new-session -d -s $session_name -n 'Document'

  # open bachelorthesis
  tmux send-keys -t "$session_name:Document" 'cd bachelorthesis/document' C-m 'v booka4.tex' C-m

  # open novex
  tmux new-window -t $session_name:2 -n 'Novex'
  tmux send-keys -t 'Novex' 'cd experiments/novex' C-m 'v novex/cli.py' C-m
  tmux split-window -t 'Novex' -v
fi

# Attach Session, on the Main window
tmux attach-session -t $session_name
