// Class: TimeLine::Updater


/* TimeLine::Updater::Updater(TimeLine&, float) */

void __thiscall TimeLine::Updater::Updater(Updater *this,TimeLine *param_1,float param_2)

{
  *(TimeLine **)this = param_1;
  this[0x14] = (Updater)0x0;
  *(float *)(this + 8) = param_2;
  *(float *)(this + 0xc) = param_2;
  return;
}


/* TimeLine::Updater::Progress() */

void __thiscall TimeLine::Updater::Progress(Updater *this)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (this[0x14] != (Updater)0x0) {
    std::deque<TimeLineEvent,std::allocator<TimeLineEvent>>::pop_front
              ((deque<TimeLineEvent,std::allocator<TimeLineEvent>> *)(*(long *)this + 8));
    this[0x14] = (Updater)0x0;
  }
  pfVar2 = *(float **)this;
  iVar1 = std::deque<TimeLineEvent,std::allocator<TimeLineEvent>>::size
                    ((deque<TimeLineEvent,std::allocator<TimeLineEvent>> *)(pfVar2 + 2));
  if (iVar1 == 0) {
    fVar4 = *pfVar2;
    *(float *)(this + 0x10) = *(float *)(this + 0xc);
    *pfVar2 = *(float *)(this + 0xc) + fVar4;
    *(undefined4 *)(this + 0xc) = 0;
    return;
  }
  pfVar2 = (float *)std::deque<TimeLineEvent,std::allocator<TimeLineEvent>>::front();
  pfVar3 = *(float **)this;
  fVar4 = *(float *)(this + 0xc);
  fVar6 = *pfVar3;
  if (fVar4 + fVar6 < *pfVar2) {
    *(float *)(this + 0x10) = fVar4;
    *pfVar3 = fVar4 + fVar6;
    *(undefined4 *)(this + 0xc) = 0;
    return;
  }
  fVar5 = *pfVar2 - fVar6;
  this[0x14] = (Updater)0x1;
  *(float *)(this + 0x10) = fVar5;
  *pfVar3 = fVar5 + fVar6;
  *(float *)(this + 0xc) = fVar4 - fVar5;
  return;
}

