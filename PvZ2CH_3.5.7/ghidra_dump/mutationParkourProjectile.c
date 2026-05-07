// Class: mutationParkourProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* mutationParkourProjectile::StaticClassInit() */

void mutationParkourProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"mutationParkourProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04d4fbb0,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* mutationParkourProjectile::StaticGetClass() */

long * mutationParkourProjectile::StaticGetClass(void)

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
  uVar2 = ParkourProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"mutationParkourProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* mutationParkourProjectile::GetClass() const */

long * mutationParkourProjectile::GetClass(void)

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
  uVar2 = ParkourProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"mutationParkourProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* mutationParkourProjectile::handleImpact(BoardEntity*) */

void __thiscall
mutationParkourProjectile::handleImpact(mutationParkourProjectile *this,BoardEntity *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  RtObject *pRVar4;
  Zombie *pZVar5;
  undefined8 *puVar6;
  ZombieTosserSubSystem *pZVar7;
  char *__s;
  undefined8 local_60;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x208) != 1) {
    uVar1 = ParkourProjectile::handleImpact((ParkourProjectile *)this,param_1);
    goto LAB_04d519b4;
  }
  if (param_1 != (BoardEntity *)0x0) {
    ToolPacketData::GetProps();
    pRVar4 = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
    uVar1 = Sexy::RtObject::IsA<GridItem>(pRVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
    if (!(bool)uVar1) {
      if (*(int *)(this + 0x204) == 0) {
        bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
        if (bVar2) {
          pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
          ParkourProjectile::stunZombie((ParkourProjectile *)this,pZVar5,2.0);
        }
        __s = "Play_Plant_Akee_Impact";
      }
      else {
        if (*(int *)(this + 0x204) != 1) goto LAB_04d519b0;
        bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
        if (bVar2) {
          ToolPacketData::GetProps();
          pRVar4 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
          pZVar5 = Sexy::RtObject::Cast<Zombie>(pRVar4);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
          cVar3 = ParkourProjectile::canZombieLaunch((ParkourProjectile *)this,pZVar5);
          if (cVar3 == '\0') {
            bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
            if (bVar2) {
              pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
              ParkourProjectile::stunZombie((ParkourProjectile *)this,pZVar5,2.0);
            }
          }
          else {
            puVar6 = (undefined8 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    *)pZVar5);
            local_60 = *puVar6;
            local_58 = *(undefined4 *)(puVar6 + 1);
            pZVar7 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
            RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
            ZombieTosserSubSystem::LaunchZombie
                      ((ZombieTosserSubSystem *)0x43200000,0x3f800000,pZVar7,pZVar5,
                       (RtWeakPtr<Sexy::ResourceInfo> *)&local_60,aRStack_50,1);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_50);
          }
        }
        __s = "Play_Plant_StarFruit_Attack";
      }
      std::string::string((string *)&local_60,__s);
      RealObject::PlayPositionalSound((RealObject *)this,(string *)&local_60,0.0);
      std::string::~string((string *)&local_60);
      nop();
      goto LAB_04d519b4;
    }
  }
LAB_04d519b0:
  uVar1 = 0;
LAB_04d519b4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* mutationParkourProjectile::mutationParkourProjectile() */

void __thiscall
mutationParkourProjectile::mutationParkourProjectile(mutationParkourProjectile *this)

{
  ParkourProjectile::ParkourProjectile((ParkourProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_069b29b0;
  *(undefined ***)(this + 0x10) = &PTR__mutationParkourProjectile_069b2ba8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x210));
  *(undefined4 *)(this + 0x228) = 0;
  return;
}


/* mutationParkourProjectile::StaticNew() */

mutationParkourProjectile * mutationParkourProjectile::StaticNew(void)

{
  mutationParkourProjectile *this;
  
  this = ::operator_new(0x230);
  mutationParkourProjectile(this);
  return this;
}


/* mutationParkourProjectile::~mutationParkourProjectile() */

void __thiscall
mutationParkourProjectile::~mutationParkourProjectile(mutationParkourProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_069b29b0;
  *(undefined ***)(this + 0x10) = &PTR__mutationParkourProjectile_069b2ba8;
  std::vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>>::~vector
            ((vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>> *)(this + 0x210));
  ParkourProjectile::~ParkourProjectile((ParkourProjectile *)this);
  return;
}


/* non-virtual thunk to mutationParkourProjectile::~mutationParkourProjectile() */

void __thiscall
mutationParkourProjectile::~mutationParkourProjectile(mutationParkourProjectile *this)

{
  ~mutationParkourProjectile(this + -0x10);
  return;
}


/* mutationParkourProjectile::~mutationParkourProjectile() */

void __thiscall
mutationParkourProjectile::~mutationParkourProjectile(mutationParkourProjectile *this)

{
  ~mutationParkourProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to mutationParkourProjectile::~mutationParkourProjectile() */

void __thiscall
mutationParkourProjectile::~mutationParkourProjectile(mutationParkourProjectile *this)

{
  ~mutationParkourProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* mutationParkourProjectile::onDraw(Sexy::Graphics*) */

void mutationParkourProjectile::onDraw(Graphics *param_1)

{
  vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>> *this;
  bool bVar1;
  ResourceInfo *this_00;
  ulong uVar2;
  SexyTransform2D *pSVar3;
  Graphics *in_x1;
  ulong uVar4;
  undefined1 in_w4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  float local_3c;
  undefined4 local_34;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x208) == 1) {
    this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x38));
    (**(code **)(**(long **)(gLawnApp + 0x9f0) + 0xd0))(auStack_58,*(long **)(gLawnApp + 0x9f0));
    fVar7 = *(float *)(param_1 + 0x1c);
    fVar8 = *(float *)(param_1 + 0x20);
    if (this_00 != (ResourceInfo *)0x0) {
      fVar12 = -1.0;
      if (param_1[0xd4] == (Graphics)0x0) {
        fVar12 = 1.0;
      }
      fVar11 = *(float *)(param_1 + 0x44);
      this = (vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>> *)
             (param_1 + 0x210);
      fVar6 = (float)FUN_04d4f090(*(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x40) * fVar12);
      fVar10 = *(float *)(in_x1 + 0x20);
      fVar9 = *(float *)(in_x1 + 0x18);
      fVar7 = (float)FUN_04d4f090((fVar7 + fVar11) - fVar8);
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)&local_50,(float)(int)((fVar6 - fVar10) * fVar9) + fVar10,
                 (float)(int)((fVar7 - *(float *)(in_x1 + 0x24)) * *(float *)(in_x1 + 0x1c)) +
                 *(float *)(in_x1 + 0x24));
      fVar8 = *(float *)(param_1 + 0xc0);
      fVar6 = *(float *)(param_1 + 0xc4);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_48,fVar12 * fVar8,fVar8);
      fVar7 = (float)FUN_04d4f090(0xbf800000);
      local_40 = Sexy::SexyVector2::operator*((SexyVector2 *)(param_1 + 0x40),fVar7);
      local_3c = fVar8;
      Sexy::SexyTransform2D::CreateTransformWithPivot
                ((SexyTransform2D *)&local_50,(SexyVector2 *)&local_48,fVar6,
                 (SexyVector2 *)&local_40,(SexyVector2 *)0x0,(bool)in_w4);
      PopAnimRig::GetPAMColor();
      local_34 = 0x78;
      PopAnimRig::SetPAMColor((PopAnimRig *)this_00,(Color *)&local_40);
      std::vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>>::push_back
                (this,aSStack_30);
      uVar5 = *(undefined8 *)(param_1 + 0x210);
      uVar2 = FUN_04d4eeec(uVar5,*(undefined8 *)(param_1 + 0x218));
      if (10 < uVar2) {
        local_50 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)this);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_48,(__normal_iterator *)&local_50);
        std::vector<Sexy::SexyTransform2D,std::allocator<Sexy::SexyTransform2D>>::erase
                  (this,local_48);
        uVar5 = *(undefined8 *)(param_1 + 0x210);
        uVar2 = FUN_04d4eeec(uVar5,*(undefined8 *)(param_1 + 0x218));
      }
      uVar4 = 4;
      while (bVar1 = uVar4 < uVar2, uVar4 = uVar4 + 5, bVar1) {
        pSVar3 = (SexyTransform2D *)FUN_04d4ef0c(uVar5);
        PopAnimRig::Draw((PopAnimRig *)this_00,in_x1,pSVar3);
        uVar5 = *(undefined8 *)(param_1 + 0x210);
        uVar2 = FUN_04d4eeec(uVar5,*(undefined8 *)(param_1 + 0x218));
      }
      local_34 = 0xff;
      PopAnimRig::SetPAMColor((PopAnimRig *)this_00,(Color *)&local_40);
    }
  }
  Projectile::onDraw(param_1);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

