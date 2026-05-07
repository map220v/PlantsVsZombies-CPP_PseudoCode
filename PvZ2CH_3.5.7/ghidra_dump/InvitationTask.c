// Class: InvitationTask


/* InvitationTask::InvitationTask() */

void __thiscall InvitationTask::InvitationTask(InvitationTask *this)

{
  *(undefined4 *)this = 0;
  this[4] = (InvitationTask)0x0;
  *(undefined4 *)(this + 8) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  return;
}


/* InvitationTask::TEMPNAMEPLACEHOLDERVALUE(InvitationTask const&) */

InvitationTask * __thiscall InvitationTask::operator=(InvitationTask *this,InvitationTask *param_1)

{
  undefined4 uVar1;
  InvitationTask IVar2;
  
  uVar1 = *(undefined4 *)param_1;
  IVar2 = param_1[4];
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  this[4] = IVar2;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::operator=
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return this;
}


/* InvitationTask::InvitationTask(InvitationTask const&) */

void __thiscall InvitationTask::InvitationTask(InvitationTask *this,InvitationTask *param_1)

{
  undefined4 uVar1;
  InvitationTask IVar2;
  
  uVar1 = *(undefined4 *)param_1;
  IVar2 = param_1[4];
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  this[4] = IVar2;
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return;
}


/* InvitationTask::InvitationTask(InvitationTask&&) */

void __thiscall InvitationTask::InvitationTask(InvitationTask *this,InvitationTask *param_1)

{
  undefined4 uVar1;
  InvitationTask IVar2;
  
  uVar1 = *(undefined4 *)param_1;
  IVar2 = param_1[4];
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  this[4] = IVar2;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  return;
}

