// Class: TimeLine


/* TimeLine::TimeLine() */

void __thiscall TimeLine::TimeLine(TimeLine *this)

{
  *(undefined4 *)this = 0;
  std::deque<TimeLineEvent,std::allocator<TimeLineEvent>>::deque();
  this[0x58] = (TimeLine)0x0;
  return;
}


/* TimeLine::~TimeLine() */

void __thiscall TimeLine::~TimeLine(TimeLine *this)

{
  std::deque<TimeLineEvent,std::allocator<TimeLineEvent>>::~deque
            ((deque<TimeLineEvent,std::allocator<TimeLineEvent>> *)(this + 8));
  return;
}


/* TimeLine::Initialize(float) */

void __thiscall TimeLine::Initialize(TimeLine *this,float param_1)

{
  *(float *)this = param_1;
  std::deque<TimeLineEvent,std::allocator<TimeLineEvent>>::clear
            ((deque<TimeLineEvent,std::allocator<TimeLineEvent>> *)(this + 8));
  return;
}


/* TimeLine::AddEvent(TimeLineEvent const&) */

void __thiscall TimeLine::AddEvent(TimeLine *this,TimeLineEvent *param_1)

{
  deque<TimeLineEvent,std::allocator<TimeLineEvent>> *this_00;
  long lVar1;
  float *pfVar2;
  float fVar3;
  
  this_00 = (deque<TimeLineEvent,std::allocator<TimeLineEvent>> *)(this + 8);
  lVar1 = std::deque<TimeLineEvent,std::allocator<TimeLineEvent>>::size(this_00);
  if ((lVar1 != 0) &&
     (fVar3 = *(float *)param_1,
     pfVar2 = (float *)std::deque<TimeLineEvent,std::allocator<TimeLineEvent>>::back(),
     fVar3 < *pfVar2)) {
    this[0x58] = (TimeLine)0x1;
    std::deque<TimeLineEvent,std::allocator<TimeLineEvent>>::push_back(this_00,param_1);
    return;
  }
  std::deque<TimeLineEvent,std::allocator<TimeLineEvent>>::push_back(this_00,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeLine::AddEvent(float, Sexy::Delegate1<float>) */

void __thiscall TimeLine::AddEvent(TimeLineEvent *param_1,TimeLine *this,Delegate1 *param_3)

{
  Delegate1<float> aDStack_b8 [48];
  TimeLineEvent aTStack_88 [128];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Delegate1<float>::Delegate1(aDStack_b8,param_3);
  TimeLineEvent::TimeLineEvent(param_1,aTStack_88,aDStack_b8);
  AddEvent(this,aTStack_88);
  TimeLineEvent::~TimeLineEvent(aTStack_88);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TimeLine::Update(float) */

void __thiscall TimeLine::Update(TimeLine *this,float param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  Updater aUStack_28 [12];
  undefined4 local_1c;
  undefined1 local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x58] != (TimeLine)0x0) {
    std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::begin();
    std::deque<Sexy::IAsyncNetworkTask*,std::allocator<Sexy::IAsyncNetworkTask*>>::end();
    FUN_0386de6c(auStack_48,aUStack_28);
    this[0x58] = (TimeLine)0x0;
  }
  Updater::Updater(aUStack_28,this,param_1);
  while (cVar1 = FUN_03868f7c(local_1c), cVar1 == '\0') {
    Updater::Progress(aUStack_28);
    FUN_0386aa10(aUStack_28,local_14);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* TimeLine::TEMPNAMEPLACEHOLDERVALUE(TimeLine&&) */

TimeLine * __thiscall TimeLine::operator=(TimeLine *this,TimeLine *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::deque<TimeLineEvent,std::allocator<TimeLineEvent>>::operator=
            ((deque<TimeLineEvent,std::allocator<TimeLineEvent>> *)(this + 8),(deque *)(param_1 + 8)
            );
  this[0x58] = param_1[0x58];
  return this;
}


/* TimeLine::TimeLine(TimeLine const&) */

void __thiscall TimeLine::TimeLine(TimeLine *this,TimeLine *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  std::deque<TimeLineEvent,std::allocator<TimeLineEvent>>::deque
            ((deque<TimeLineEvent,std::allocator<TimeLineEvent>> *)(this + 8),(deque *)(param_1 + 8)
            );
  this[0x58] = param_1[0x58];
  return;
}

