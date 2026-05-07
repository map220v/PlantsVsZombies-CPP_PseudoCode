// Class: ZombieGentlemanTosserSubSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGentlemanTosserSubSystem::StaticClassInit() */

void ZombieGentlemanTosserSubSystem::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"ZombieGentlemanTosserSubSystem");
    (*pcVar2)(plVar1,asStack_10,FUN_046db05c,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieGentlemanTosserSubSystem::StaticGetClass() */

long * ZombieGentlemanTosserSubSystem::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ZombieTosserSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieGentlemanTosserSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGentlemanTosserSubSystem::GetClass() const */

long * ZombieGentlemanTosserSubSystem::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ZombieTosserSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieGentlemanTosserSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieGentlemanTosserSubSystem::getIsStoped() const */

ZombieGentlemanTosserSubSystem __thiscall
ZombieGentlemanTosserSubSystem::getIsStoped(ZombieGentlemanTosserSubSystem *this)

{
  return this[0x70];
}


/* ZombieGentlemanTosserSubSystem::isZombieTosseStoped(Zombie*) const */

undefined8 __thiscall
ZombieGentlemanTosserSubSystem::isZombieTosseStoped
          (ZombieGentlemanTosserSubSystem *this,Zombie *param_1)

{
  ZombieGentleman *this_00;
  undefined8 uVar1;
  
  if ((param_1 != (Zombie *)0x0) &&
     (this_00 = Sexy::RtObject::Cast<ZombieGentleman>((RtObject *)param_1),
     this_00 != (ZombieGentleman *)0x0)) {
    uVar1 = ZombieGentleman::getIsDroped(this_00);
    return uVar1;
  }
  return 0;
}


/* ZombieGentlemanTosserSubSystem::ZombieGentlemanTosserSubSystem() */

void __thiscall
ZombieGentlemanTosserSubSystem::ZombieGentlemanTosserSubSystem(ZombieGentlemanTosserSubSystem *this)

{
  ZombieTosserSubSystem::ZombieTosserSubSystem((ZombieTosserSubSystem *)this);
  this[0x70] = (ZombieGentlemanTosserSubSystem)0x0;
  *(undefined ***)this = &PTR_GetClass_068b6c80;
  return;
}


/* ZombieGentlemanTosserSubSystem::StaticNew() */

ZombieGentlemanTosserSubSystem * ZombieGentlemanTosserSubSystem::StaticNew(void)

{
  ZombieGentlemanTosserSubSystem *this;
  
  this = ::operator_new(0x78);
  ZombieGentlemanTosserSubSystem(this);
  return this;
}


/* ZombieGentlemanTosserSubSystem::~ZombieGentlemanTosserSubSystem() */

void __thiscall
ZombieGentlemanTosserSubSystem::~ZombieGentlemanTosserSubSystem
          (ZombieGentlemanTosserSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_068b6c80;
  ZombieTosserSubSystem::~ZombieTosserSubSystem((ZombieTosserSubSystem *)this);
  return;
}


/* ZombieGentlemanTosserSubSystem::~ZombieGentlemanTosserSubSystem() */

void __thiscall
ZombieGentlemanTosserSubSystem::~ZombieGentlemanTosserSubSystem
          (ZombieGentlemanTosserSubSystem *this)

{
  ~ZombieGentlemanTosserSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieGentlemanTosserSubSystem::Update() */

void ZombieGentlemanTosserSubSystem::Update(void)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  SexyVector3 *this_01;
  SexyVector3 *this_02;
  uint uVar1;
  char cVar2;
  int iVar3;
  ZombieGentlemanTosserSubSystem *in_x0;
  ulong uVar4;
  long lVar5;
  RtWeakPtrBase *pRVar6;
  float *pfVar7;
  long lVar8;
  ResourceInfo *this_03;
  Delegate1wRet<bool,SexyURL_const&> *pDVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float in_s1;
  undefined4 in_s2;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *)(in_x0 + 0x40);
  local_8 = ___stack_chk_guard;
  uVar11 = 0;
  fVar16 = (float)PVZ_Dt();
  uVar15 = *(undefined8 *)(in_x0 + 0x10);
  uVar4 = FUN_046da93c(uVar15,*(undefined8 *)(in_x0 + 0x18));
  if (uVar4 != 0) {
    do {
      uVar14 = *(undefined8 *)(in_x0 + 0x40);
      lVar5 = FUN_046da948(uVar14,*(undefined8 *)(in_x0 + 0x48));
      lVar8 = 0;
      do {
        iVar3 = (int)lVar8;
        if (lVar8 == lVar5) goto LAB_046e30e4;
        lVar12 = FUN_046da978(uVar14,lVar8);
        pRVar6 = (RtWeakPtrBase *)FUN_046da988(uVar15,uVar11);
        cVar2 = Sexy::RtWeakPtrBase::operator==((RtWeakPtrBase *)(lVar12 + 0x40),pRVar6);
        lVar8 = lVar8 + 1;
      } while (cVar2 == '\0');
      local_38 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin(this);
      local_28 = __gnu_cxx::
                 __normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>
                 ::operator+((__normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>
                              *)&local_38,(long)iVar3);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_18,(__normal_iterator *)&local_28);
      std::vector<TossedZombie,std::allocator<TossedZombie>>::erase
                ((vector<TossedZombie,std::allocator<TossedZombie>> *)this,
                 CONCAT44(fStack_14,local_18));
      uVar15 = *(undefined8 *)(in_x0 + 0x10);
      uVar4 = FUN_046da93c(uVar15,*(undefined8 *)(in_x0 + 0x18));
LAB_046e30e4:
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar4);
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(in_x0 + 0x58);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (in_x0 + 0x10));
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this);
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_18,(__normal_iterator *)&local_28);
  uVar15 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::begin(this_00);
  uVar14 = std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::end(this_00);
  std::vector<TossedZombie,std::allocator<TossedZombie>>::
  insert<__gnu_cxx::__normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>,void>
            ((vector<TossedZombie,std::allocator<TossedZombie>> *)this,CONCAT44(fStack_14,local_18),
             uVar15,uVar14);
  std::vector<TossedZombie,std::allocator<TossedZombie>>::clear
            ((vector<TossedZombie,std::allocator<TossedZombie>> *)this_00);
  uVar15 = *(undefined8 *)(in_x0 + 0x40);
  iVar3 = FUN_046da948(uVar15,*(undefined8 *)(in_x0 + 0x48));
  uVar1 = iVar3 - 1;
  if ((int)uVar1 < 0) {
LAB_046e3430:
    if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar12 = (long)(int)uVar1 + -1;
  lVar8 = lVar12;
  lVar5 = (long)(int)uVar1;
  do {
    lVar13 = lVar8;
    lVar8 = FUN_046da978(uVar15,lVar5);
    this_03 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar8 + 0x40));
    if (this_03 == (ResourceInfo *)0x0) {
      lVar8 = FUN_046da948(*(undefined8 *)(in_x0 + 0x40),*(undefined8 *)(in_x0 + 0x48));
      if (lVar8 != 0) {
LAB_046e33ec:
        local_38 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this);
        local_28 = __gnu_cxx::
                   __normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>
                   ::operator+((__normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>
                                *)&local_38,lVar5);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)&local_28);
        std::vector<TossedZombie,std::allocator<TossedZombie>>::erase
                  ((vector<TossedZombie,std::allocator<TossedZombie>> *)this,
                   CONCAT44(fStack_14,local_18));
      }
    }
    else {
      cVar2 = Zombie::IsControlled((Zombie *)this_03);
      if (cVar2 != '\0') {
        Zombie::SetIsControlled((Zombie *)this_03,false);
      }
      cVar2 = isZombieTosseStoped(in_x0,(Zombie *)this_03);
      if (cVar2 == '\0') {
        this_01 = (SexyVector3 *)(lVar8 + 0x24);
        this_02 = (SexyVector3 *)(lVar8 + 0x18);
        uVar17 = Sexy::SexyVector3::operator*(this_01,fVar16);
        local_48 = CONCAT44(in_s1,uVar17);
        local_40 = in_s2;
        uVar17 = Sexy::SexyVector3::operator+(this_02,(SexyVector3 *)&local_48);
        local_38 = CONCAT44(in_s1,uVar17);
        local_30 = in_s2;
        uVar17 = Sexy::SexyVector3::operator*((SexyVector3 *)(lVar8 + 0x30),fVar16 * fVar16 * 0.5);
        local_28 = CONCAT44(in_s1,uVar17);
        local_20 = in_s2;
        local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)&local_38,(SexyVector3 *)&local_28);
        fStack_14 = in_s1;
        local_10 = in_s2;
        Sexy::SexyVector3::operator=(this_02,(SexyVector3 *)&local_18);
        uVar17 = Sexy::SexyVector3::operator*((SexyVector3 *)(lVar8 + 0x30),fVar16);
        local_28 = CONCAT44(in_s1,uVar17);
        local_20 = in_s2;
        local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)&local_28);
        fStack_14 = in_s1;
        local_10 = in_s2;
        Sexy::SexyVector3::operator=(this_01,(SexyVector3 *)&local_18);
        (**(code **)(*(long *)this_03 + 0x78))(this_03,this_02);
        fVar18 = (float)RealObject::CalcGroundZHeight((RealObject *)this_03,this_02);
        in_s1 = *(float *)(lVar8 + 0x20);
        if ((in_s1 < fVar18) && (in_s1 = *(float *)(lVar8 + 0x2c), in_s1 < 0.0)) {
          lVar10 = *(long *)this_03;
          *(float *)(lVar8 + 0x14) = fVar18;
          (**(code **)(lVar10 + 0x78))(this_03,lVar8 + 0xc);
          if (*(char *)(lVar8 + 0x92) != '\0') {
            Zombie::EndCondition((Zombie *)this_03,2);
          }
          Zombie::EndCondition((Zombie *)this_03,0xe);
          Zombie::SetIsFlying((Zombie *)this_03,*(bool *)(lVar8 + 0x91));
          Zombie::SetIsControlled((Zombie *)this_03,false);
          iVar3 = ::RtReflectionDelegate::operator_cast_to_int
                            ((RtReflectionDelegate *)(lVar8 + 0x48));
          if (iVar3 != 0) {
            pDVar9 = (Delegate1wRet<bool,SexyURL_const&> *)
                     RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::GetDelegate
                               ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)(lVar8 + 0x48));
            Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(pDVar9,(SexyURL *)this_03);
          }
          MessageRouter::Post<Zombie*,Zombie*>
                    ((MessageRouter *)gMessageRouter,Message::ZombieTossEnd,(Zombie *)this_03);
          goto LAB_046e33ec;
        }
      }
      else {
        pfVar7 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this_03);
        in_s2 = 0;
        in_s1 = pfVar7[1];
        EATextSquish::Vec3::Vec3((Vec3 *)&local_18,*pfVar7,in_s1,0.0);
        (**(code **)(*(long *)this_03 + 0x78))
                  (this_03,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_18);
        if (*(char *)(lVar8 + 0x92) != '\0') {
          Zombie::EndCondition((Zombie *)this_03,2);
        }
        Zombie::EndCondition((Zombie *)this_03,0xe);
        Zombie::SetIsFlying((Zombie *)this_03,*(bool *)(lVar8 + 0x91));
        Zombie::SetIsControlled((Zombie *)this_03,false);
        iVar3 = ::RtReflectionDelegate::operator_cast_to_int((RtReflectionDelegate *)(lVar8 + 0x48))
        ;
        if (iVar3 != 0) {
          pDVar9 = (Delegate1wRet<bool,SexyURL_const&> *)
                   RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::GetDelegate
                             ((RtReflectionDelegate<Sexy::Delegate1<Zombie*>> *)(lVar8 + 0x48));
          Sexy::Delegate1wRet<bool,SexyURL_const&>::operator()(pDVar9,(SexyURL *)this_03);
        }
        local_48 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this);
        local_38 = __gnu_cxx::
                   __normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>
                   ::operator+((__normal_iterator<TossedZombie*,std::vector<TossedZombie,std::allocator<TossedZombie>>>
                                *)&local_48,lVar5);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_28,(__normal_iterator *)&local_38);
        std::vector<TossedZombie,std::allocator<TossedZombie>>::erase
                  ((vector<TossedZombie,std::allocator<TossedZombie>> *)this,local_28);
      }
    }
    if (lVar13 == lVar12 - (ulong)uVar1) goto LAB_046e3430;
    uVar15 = *(undefined8 *)(in_x0 + 0x40);
    lVar8 = lVar13 + -1;
    lVar5 = lVar13;
  } while( true );
}

