// Class: TimelineActionRunnerEvent


/* TimelineActionRunnerEvent::TimelineActionRunnerEvent(RunnableAction*, float) */

void __thiscall
TimelineActionRunnerEvent::TimelineActionRunnerEvent
          (TimelineActionRunnerEvent *this,RunnableAction *param_1,float param_2)

{
  *(float *)(this + 8) = param_2;
  *(RunnableAction **)this = param_1;
  return;
}

