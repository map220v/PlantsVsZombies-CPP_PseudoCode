// Class: NewPVPGameEvent


/* NewPVPGameEvent::NewPVPGameEvent() */

void __thiscall NewPVPGameEvent::NewPVPGameEvent(NewPVPGameEvent *this)

{
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)this = 0;
  EndLevelData::EndLevelData((EndLevelData *)(this + 8));
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


/* NewPVPGameEvent::~NewPVPGameEvent() */

void __thiscall NewPVPGameEvent::~NewPVPGameEvent(NewPVPGameEvent *this)

{
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x20));
  return;
}


void __thiscall NewPVPGameEvent::~NewPVPGameEvent(NewPVPGameEvent *this)

{
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x20));
  return;
}


void __thiscall NewPVPGameEvent::~NewPVPGameEvent(NewPVPGameEvent *this)

{
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x20));
  return;
}


void __thiscall NewPVPGameEvent::~NewPVPGameEvent(NewPVPGameEvent *this)

{
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x20));
  return;
}


/* NewPVPGameEvent::NewPVPGameEvent(int, NewPVPGameEvent::EventType, int, int, int, float, unsigned
   int, float, std::vector<float, std::allocator<float> > const&) */

void __thiscall
NewPVPGameEvent::NewPVPGameEvent
          (undefined4 param_1_00,undefined4 param_2,NewPVPGameEvent *this,undefined4 param_1,
          undefined4 param_5,undefined4 param_6,int param_7,int param_8,undefined4 param_9,
          vector *param_10)

{
  *(undefined4 *)this = param_5;
  *(undefined4 *)(this + 4) = param_6;
  NewPVPGameEventPositionData::NewPVPGameEventPositionData
            ((NewPVPGameEventPositionData *)(float)param_7,(float)param_8,this + 8,0);
  *(undefined4 *)(this + 0x1c) = param_1;
  *(undefined4 *)(this + 0x18) = param_9;
  *(undefined4 *)(this + 0x14) = param_1_00;
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)(this + 0x20),param_10);
  *(undefined4 *)(this + 0x38) = param_2;
  return;
}


/* NewPVPGameEvent::NewPVPGameEvent(int, NewPVPGameEvent::EventType, int, float, float, float,
   unsigned int, float, std::vector<float, std::allocator<float> > const&) */

void __thiscall
NewPVPGameEvent::NewPVPGameEvent
          (undefined1 param_1_00 [16],undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
          NewPVPGameEvent *this,undefined4 param_1,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,vector *param_10)

{
  *(undefined4 *)this = param_7;
  *(undefined4 *)(this + 4) = param_8;
  NewPVPGameEventPositionData::NewPVPGameEventPositionData
            ((NewPVPGameEventPositionData *)(this + 8),1);
  *(undefined4 *)(this + 0x1c) = param_1;
  *(undefined4 *)(this + 0x18) = param_9;
  *(undefined4 *)(this + 0x14) = param_3;
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)(this + 0x20),param_10);
  *(undefined4 *)(this + 0x38) = param_4;
  return;
}


/* NewPVPGameEvent::NewPVPGameEvent(NewPVPGameEvent const&) */

void __thiscall NewPVPGameEvent::NewPVPGameEvent(NewPVPGameEvent *this,NewPVPGameEvent *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar4;
  *(undefined4 *)(this + 0x14) = uVar5;
  std::vector<float,std::allocator<float>>::vector
            ((vector<float,std::allocator<float>> *)(this + 0x20),(vector *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return;
}


/* NewPVPGameEvent::NewPVPGameEvent(NewPVPGameEvent&&) */

void __thiscall NewPVPGameEvent::NewPVPGameEvent(NewPVPGameEvent *this,NewPVPGameEvent *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar4;
  *(undefined4 *)(this + 0x14) = uVar5;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x20),(vector *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return;
}


/* NewPVPGameEvent::TEMPNAMEPLACEHOLDERVALUE(NewPVPGameEvent&&) */

NewPVPGameEvent * __thiscall
NewPVPGameEvent::operator=(NewPVPGameEvent *this,NewPVPGameEvent *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 0x18) = uVar3;
  *(undefined4 *)(this + 0x1c) = uVar4;
  *(undefined4 *)(this + 0x14) = uVar5;
  std::vector<float,std::allocator<float>>::operator=
            ((vector<float,std::allocator<float>> *)(this + 0x20),(vector *)(param_1 + 0x20));
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return this;
}

