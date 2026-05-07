// Class: CannonEntry


/* CannonEntry::SetAvatar(bool) */

void __thiscall CannonEntry::SetAvatar(CannonEntry *this,bool param_1)

{
  this[0x18] = (CannonEntry)param_1;
  return;
}


/* CannonEntry::SetGroundTarget(bool) */

void __thiscall CannonEntry::SetGroundTarget(CannonEntry *this,bool param_1)

{
  this[0x19] = (CannonEntry)param_1;
  return;
}


/* CannonEntry::ResetBulletTargets() */

void __thiscall CannonEntry::ResetBulletTargets(CannonEntry *this)

{
  std::vector<BulletTarget,std::allocator<BulletTarget>>::clear
            ((vector<BulletTarget,std::allocator<BulletTarget>> *)(this + 0x20));
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonEntry::SetOwner(PlantCobcannon*) */

void __thiscall CannonEntry::SetOwner(CannonEntry *this,PlantCobcannon *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (PlantCobcannon *)0x0) || (*(long *)(param_1 + 0x10) == 0)) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x38),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x10),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Plant::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CannonEntry::CannonEntry() */

void __thiscall CannonEntry::CannonEntry(CannonEntry *this)

{
  Sexy::Point::Point((Point *)this);
  *(undefined4 *)(this + 8) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  this[0x18] = (CannonEntry)0x0;
  this[0x19] = (CannonEntry)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  return;
}


/* CannonEntry::CannonEntry(float, Sexy::Point const&) */

void __thiscall CannonEntry::CannonEntry(CannonEntry *this,float param_1,Point *param_2)

{
  Sexy::Point::Point((Point *)this);
  *(undefined4 *)(this + 8) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  this[0x18] = (CannonEntry)0x0;
  this[0x19] = (CannonEntry)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x20));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  *(undefined8 *)this = *(undefined8 *)param_2;
  *(float *)(this + 8) = param_1;
  return;
}


/* CannonEntry::~CannonEntry() */

void __thiscall CannonEntry::~CannonEntry(CannonEntry *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  std::vector<BulletTarget,std::allocator<BulletTarget>>::~vector
            ((vector<BulletTarget,std::allocator<BulletTarget>> *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return;
}


void __thiscall CannonEntry::~CannonEntry(CannonEntry *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  std::vector<BulletTarget,std::allocator<BulletTarget>>::~vector
            ((vector<BulletTarget,std::allocator<BulletTarget>> *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return;
}


void __thiscall CannonEntry::~CannonEntry(CannonEntry *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  std::vector<BulletTarget,std::allocator<BulletTarget>>::~vector
            ((vector<BulletTarget,std::allocator<BulletTarget>> *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return;
}


void __thiscall CannonEntry::~CannonEntry(CannonEntry *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  std::vector<BulletTarget,std::allocator<BulletTarget>>::~vector
            ((vector<BulletTarget,std::allocator<BulletTarget>> *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CannonEntry::AddBulletTarget(BoardEntity*) */

void CannonEntry::AddBulletTarget(BoardEntity *param_1)

{
  RtWeakPtr *this;
  int iVar1;
  ResourceInfo *pRVar2;
  long *extraout_x0;
  long lVar3;
  BoardTransforms *this_00;
  UIEasyButtonWidget *this_01;
  RtObject *this_02;
  PlantAnimRig_Cobcannon *this_03;
  SexyVector3 *pSVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x1;
  code *pcVar5;
  float fVar6;
  float fVar7;
  undefined8 local_30;
  float local_28;
  float local_24;
  undefined4 local_18;
  float fStack_14;
  long local_8;
  
  this = (RtWeakPtr *)(param_1 + 0x38);
  local_8 = ___stack_chk_guard;
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
  if (pRVar2 != (ResourceInfo *)0x0) {
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x10));
    if (pRVar2 != (ResourceInfo *)0x0) {
      Sexy::Point::Point((Point *)&local_30);
      if (in_x1 == (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)0x0) {
        Sexy::Point::Point((Point *)&local_18,-1,-1);
        local_30 = CONCAT44(fStack_14,local_18);
      }
      else {
        DVec3::DVec3((DVec3 *)&local_28);
        nop();
        if (extraout_x0 == (long *)0x0) {
          pSVar4 = (SexyVector3 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(in_x1);
          this_00 = (BoardTransforms *)Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,pSVar4)
          ;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x1c);
          pcVar5 = *(code **)(*extraout_x0 + 0x3a8);
          lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          fVar7 = *(float *)(lVar3 + 0x2c8);
          local_18 = (*pcVar5)(fVar7 * (float)(iVar1 + 1) + 0.15,extraout_x0);
          fStack_14 = fVar7;
          this_00 = (BoardTransforms *)
                    Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
        }
        BoardTransforms::BoardSpaceToGrid(this_00,local_28,local_24);
        local_30 = CONCAT44(fStack_14,local_18);
      }
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      fVar7 = (float)PVZ_T();
      this_01 = (UIEasyButtonWidget *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x10));
      this_02 = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_01);
      this_03 = Sexy::RtObject::Cast<PlantAnimRig_Cobcannon>(this_02);
      if (this_03 != (PlantAnimRig_Cobcannon *)0x0) {
        std::string::string((string *)&local_18,"ready_idle");
        fVar6 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this_03,(string *)&local_18);
        fVar7 = fVar7 + fVar6;
        std::string::~string((string *)&local_18);
        nop();
      }
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      iVar1 = *(int *)(param_1 + 0x1c);
      fVar6 = *(float *)(lVar3 + 0x2c4);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      BulletTarget::BulletTarget
                ((BulletTarget *)&local_18,(Point *)&local_30,
                 fVar6 + *(float *)(lVar3 + 0x2c8) * (float)iVar1 + fVar7);
      std::vector<BulletTarget,std::allocator<BulletTarget>>::push_back
                ((vector<BulletTarget,std::allocator<BulletTarget>> *)(param_1 + 0x20),
                 (BulletTarget *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CannonEntry::CannonEntry(CannonEntry const&) */

void __thiscall CannonEntry::CannonEntry(CannonEntry *this,CannonEntry *param_1)

{
  CannonEntry CVar1;
  CannonEntry CVar2;
  
  Sexy::Point::Point((Point *)this,(TPoint *)param_1);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),(RtWeakPtrBase *)(param_1 + 0x10));
  CVar1 = param_1[0x18];
  CVar2 = param_1[0x19];
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  this[0x18] = CVar1;
  this[0x19] = CVar2;
  std::vector<BulletTarget,std::allocator<BulletTarget>>::vector
            ((vector<BulletTarget,std::allocator<BulletTarget>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x38),(RtWeakPtrBase *)(param_1 + 0x38));
  return;
}


/* CannonEntry::TEMPNAMEPLACEHOLDERVALUE(CannonEntry&&) */

CannonEntry * __thiscall CannonEntry::operator=(CannonEntry *this,CannonEntry *param_1)

{
  undefined4 uVar1;
  CannonEntry CVar2;
  CannonEntry CVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = uVar1;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x10),(RtWeakPtr *)(param_1 + 0x10));
  CVar2 = param_1[0x18];
  CVar3 = param_1[0x19];
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  this[0x18] = CVar2;
  this[0x19] = CVar3;
  std::vector<BulletTarget,std::allocator<BulletTarget>>::operator=
            ((vector<BulletTarget,std::allocator<BulletTarget>> *)(this + 0x20),
             (vector *)(param_1 + 0x20));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x38),(RtWeakPtr *)(param_1 + 0x38));
  return this;
}

