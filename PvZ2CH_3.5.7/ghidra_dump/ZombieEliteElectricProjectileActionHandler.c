// Class: ZombieEliteElectricProjectileActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteElectricProjectileActionHandler::StaticClassInit() */

void ZombieEliteElectricProjectileActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieEliteElectricProjectileActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_04ef96a0,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEliteElectricProjectileActionHandler::StaticGetClass() */

long * ZombieEliteElectricProjectileActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieElectricProjectileActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEliteElectricProjectileActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieEliteElectricProjectileActionHandler::GetClass() const */

long * ZombieEliteElectricProjectileActionHandler::GetClass(void)

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
  uVar2 = ZombieElectricProjectileActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieEliteElectricProjectileActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteElectricProjectileActionHandler::launchProjectile(Sexy::SexyVector3,
   Sexy::SexyVector3, Sexy::RtWeakPtr<ProjectilePropertySheet>, float) */

void ZombieEliteElectricProjectileActionHandler::launchProjectile
               (Board *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,float param_7,ZombieActionHandler *param_8,
               RtWeakPtrBase *param_9)

{
  undefined8 uVar1;
  Projectile *this;
  undefined8 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
  local_20 = SUB84(param_1,0);
  local_1c = (undefined4)param_2;
  local_18 = (undefined4)param_3;
  local_30 = param_4;
  local_2c = param_5;
  local_28 = param_6;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_9);
  uVar1 = ZombieActionHandler::getZombie(param_8);
  this = (Projectile *)Board::AddProjectile(param_1,param_2,param_3,uVar2,aRStack_10,uVar1,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Projectile::LaunchAt(this,(SexyVector3 *)&local_30,250.0,param_7);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieEliteElectricProjectileActionHandler::ZombieEliteElectricProjectileActionHandler() */

void __thiscall
ZombieEliteElectricProjectileActionHandler::ZombieEliteElectricProjectileActionHandler
          (ZombieEliteElectricProjectileActionHandler *this)

{
  ZombieElectricProjectileActionHandler::ZombieElectricProjectileActionHandler
            ((ZombieElectricProjectileActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_06a087f0;
  return;
}


/* ZombieEliteElectricProjectileActionHandler::StaticNew() */

ZombieEliteElectricProjectileActionHandler *
ZombieEliteElectricProjectileActionHandler::StaticNew(void)

{
  ZombieEliteElectricProjectileActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombieEliteElectricProjectileActionHandler(this);
  return this;
}


/* ZombieEliteElectricProjectileActionHandler::~ZombieEliteElectricProjectileActionHandler() */

void __thiscall
ZombieEliteElectricProjectileActionHandler::~ZombieEliteElectricProjectileActionHandler
          (ZombieEliteElectricProjectileActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_06a087f0;
  ZombieElectricProjectileActionHandler::~ZombieElectricProjectileActionHandler
            ((ZombieElectricProjectileActionHandler *)this);
  return;
}


/* ZombieEliteElectricProjectileActionHandler::~ZombieEliteElectricProjectileActionHandler() */

void __thiscall
ZombieEliteElectricProjectileActionHandler::~ZombieEliteElectricProjectileActionHandler
          (ZombieEliteElectricProjectileActionHandler *this)

{
  ~ZombieEliteElectricProjectileActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieEliteElectricProjectileActionHandler::fireProjectile() */

void ZombieEliteElectricProjectileActionHandler::fireProjectile(void)

{
  RtWeakPtr *pRVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ZombieActionHandler *in_x0;
  RtObject *this;
  ZombieEliteSkyCityElectric *this_00;
  ZombossHydraSprayActionDefinition *pZVar5;
  SexyVector3 *this_01;
  undefined4 *puVar6;
  undefined8 *puVar7;
  Plant *this_02;
  code *pcVar8;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<PowerPropertySheet> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (RtObject *)ZombieActionHandler::getZombie(in_x0);
  if (this == (RtObject *)0x0) {
    ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  }
  else {
    this_00 = Sexy::RtObject::Cast<ZombieEliteSkyCityElectric>(this);
    pZVar5 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
    if (this_00 != (ZombieEliteSkyCityElectric *)0x0) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      EntityFinder::GetEntities(avStack_20,1);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48),
            bVar2) {
        puVar7 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_40);
        this_02 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar7);
        cVar3 = Plant::HasCondition(this_02,9);
        if (cVar3 == '\0') {
          cVar3 = Plant::HasCondition(this_02,10);
          if (cVar3 == '\0') {
            iVar4 = Sexy::Rand(2);
            pRVar1 = (RtWeakPtr *)(pZVar5 + 0x80);
            if (iVar4 == 1) {
              pRVar1 = (RtWeakPtr *)(pZVar5 + 0x38);
            }
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_40,pRVar1);
          }
          else {
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_40,(RtWeakPtr *)(pZVar5 + 0x80));
          }
        }
        else {
          Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_40,(RtWeakPtr *)(pZVar5 + 0x38));
        }
        pcVar8 = *(code **)(*(long *)in_x0 + 0xb0);
        this_01 = (SexyVector3 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)this);
        local_30 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)(pZVar5 + 0x48));
        local_2c = in_s1;
        local_28 = in_s2;
        puVar6 = (undefined4 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                *)this_02);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
        (*pcVar8)(local_30,local_2c,local_28,*puVar6,puVar6[1],puVar6[2],
                  *(undefined4 *)(pZVar5 + 0x78));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40)
        ;
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
        in_s1 = local_2c;
        in_s2 = local_28;
      }
      ZombieEliteSkyCityElectric::FinishSpecialSkill(this_00);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

