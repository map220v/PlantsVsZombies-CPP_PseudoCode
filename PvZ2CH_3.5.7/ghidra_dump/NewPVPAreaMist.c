// Class: NewPVPAreaMist


/* NewPVPAreaMist::GetRenderOrder() */

undefined8 NewPVPAreaMist::GetRenderOrder(void)

{
  return 600000;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaMist::StaticClassInit() */

void NewPVPAreaMist::StaticClassInit(void)

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
    std::string::string(asStack_10,"NewPVPAreaMist");
    (*pcVar2)(plVar1,asStack_10,FUN_034c1190,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPAreaMist::StaticGetClass() */

long * NewPVPAreaMist::StaticGetClass(void)

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
  uVar2 = NewPVPArea::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPAreaMist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAreaMist::GetClass() const */

long * NewPVPAreaMist::GetClass(void)

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
  uVar2 = NewPVPArea::StaticGetClass();
  (*pcVar3)(plVar1,"NewPVPAreaMist",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NewPVPAreaMist::UpdateEmptyRect() */

void __thiscall NewPVPAreaMist::UpdateEmptyRect(NewPVPAreaMist *this)

{
  this[0x1b] = (NewPVPAreaMist)0x1;
  return;
}


/* NewPVPAreaMist::OnPlantRefresh(Plant*) */

void NewPVPAreaMist::OnPlantRefresh(Plant *param_1)

{
  if (param_1[0x1c] != (Plant)0x0) {
    return;
  }
  UpdateEmptyRect((NewPVPAreaMist *)param_1);
  return;
}


/* NewPVPAreaMist::StreetLampUseSkillEnd() */

void __thiscall NewPVPAreaMist::StreetLampUseSkillEnd(NewPVPAreaMist *this)

{
  this[0x1c] = (NewPVPAreaMist)0x0;
  UpdateEmptyRect(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaMist::CheckBloverEffect() */

void __thiscall NewPVPAreaMist::CheckBloverEffect(NewPVPAreaMist *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  long extraout_x0;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar4 = (undefined4 *)FUN_034b0570(*(undefined8 *)(this + 0x28),0);
  fVar5 = (float)FUN_034b7428(*puVar4);
  iVar2 = BoardTransforms::BoardSpaceToGridXUnbounded(fVar5);
  if ((iVar2 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8)) && (this[0x1a] != (NewPVPAreaMist)0x0))
  {
    this[0x1a] = (NewPVPAreaMist)0x0;
    EntityComponent_GroundEffect::GetEffect();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    iVar2 = *(int *)(extraout_x0 + 0x28);
    iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar2 = FUN_034b73dc(((iVar1 - iVar2) + 1) * iVar3);
    *(float *)(this + 0x20) = (float)iVar2;
    fVar5 = (float)PVZ_T();
    *(float *)(this + 0x24) = fVar5 + *(float *)(extraout_x0 + 0x24);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaMist::MistyIntervalUpdata() */

void __thiscall NewPVPAreaMist::MistyIntervalUpdata(NewPVPAreaMist *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long extraout_x0;
  float fVar4;
  undefined4 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)PVZ_T();
  if (*(float *)(this + 0x24) < fVar4) {
    if (this[0x1a] != (NewPVPAreaMist)0x0) {
      this[0x1a] = (NewPVPAreaMist)0x0;
      EntityComponent_GroundEffect::GetEffect();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      iVar3 = *(int *)(extraout_x0 + 0x28);
      iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar3 = FUN_034b73dc(((iVar1 - iVar3) + 1) * iVar2);
      *(float *)(this + 0x20) = (float)-iVar3;
    }
    uVar5 = PVZ_EOT();
    *(undefined4 *)(this + 0x24) = uVar5;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x034cdf04 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* NewPVPAreaMist::DrawMistImage(Sexy::Graphics*) */

void __thiscall NewPVPAreaMist::DrawMistImage(NewPVPAreaMist *this,Graphics *param_1)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  ResourceInfo *pRVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x28));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar2) {
    pfVar3 = (float *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    if ((this[0x1a] == (NewPVPAreaMist)0x0) || (*(char *)(pfVar3 + 4) == '\0')) {
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pfVar3 + 0xc));
      Sexy::Graphics::DrawImageF
                (param_1,(Image *)pRVar4,pfVar3[2] + *pfVar3,pfVar3[1],(TRect *)(pfVar3 + 6));
    }
    else {
      Sexy::Graphics::PushState(param_1);
      Sexy::Graphics::SetColorizeImages(param_1,true);
      auVar6 = PVZ_T();
      local_2c = 0;
      local_18._0_4_ = 0x3f800000;
      CurveLerp<float>(auVar6,0x40000000,auVar6._0_4_ - pfVar3[5],&local_2c,(Color *)&local_18,1);
      local_2c = 0;
      local_18 = CONCAT44(local_18._4_4_,0x3f800000);
      fVar5 = CurveEvaluate<float>(&local_2c,(Color *)&local_18,3);
      Sexy::Color::Color((Color *)&local_18,1);
      fVar1 = fVar5;
      if (*(char *)((long)pfVar3 + 0xf) == '\0') {
        fVar1 = 1.0 - fVar5;
      }
      local_c = (int)(fVar1 * 255.0);
      Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pfVar3 + 0xc));
      Sexy::Graphics::DrawImageF(param_1,(Image *)pRVar4,*pfVar3,pfVar3[1]);
      if (fVar5 == 1.0) {
        *(undefined1 *)(pfVar3 + 4) = 0;
      }
      Sexy::Graphics::PopState(param_1);
    }
    std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_28);
  }
  if (this[0x1a] == (NewPVPAreaMist)0x0) {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x70));
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x70));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2)
    {
      pfVar3 = (float *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pfVar3 + 0xc));
      Sexy::Graphics::DrawImageF
                (param_1,(Image *)pRVar4,pfVar3[2] + *pfVar3,pfVar3[1],(TRect *)(pfVar3 + 6));
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x034cdf04 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* NewPVPAreaMist::Draw(Sexy::Graphics*) */

void __thiscall NewPVPAreaMist::Draw(NewPVPAreaMist *this,Graphics *param_1)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  ResourceInfo *pRVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  int iStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uStack_28 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x28));
  uStack_20 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0x28));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_28,(__normal_iterator *)&uStack_20), bVar2)
  {
    pfVar3 = (float *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_28);
    if ((this[0x1a] == (NewPVPAreaMist)0x0) || (*(char *)(pfVar3 + 4) == '\0')) {
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pfVar3 + 0xc));
      Sexy::Graphics::DrawImageF
                (param_1,(Image *)pRVar4,pfVar3[2] + *pfVar3,pfVar3[1],(TRect *)(pfVar3 + 6));
    }
    else {
      Sexy::Graphics::PushState(param_1);
      Sexy::Graphics::SetColorizeImages(param_1,true);
      auVar6 = PVZ_T();
      uStack_2c = 0;
      uStack_18._0_4_ = 0x3f800000;
      CurveLerp<float>(auVar6,0x40000000,auVar6._0_4_ - pfVar3[5],&uStack_2c,(Color *)&uStack_18,1);
      uStack_2c = 0;
      uStack_18 = CONCAT44(uStack_18._4_4_,0x3f800000);
      fVar5 = CurveEvaluate<float>(&uStack_2c,(Color *)&uStack_18,3);
      Sexy::Color::Color((Color *)&uStack_18,1);
      fVar1 = fVar5;
      if (*(char *)((long)pfVar3 + 0xf) == '\0') {
        fVar1 = 1.0 - fVar5;
      }
      iStack_c = (int)(fVar1 * 255.0);
      Sexy::Graphics::SetColor(param_1,(Color *)&uStack_18);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pfVar3 + 0xc));
      Sexy::Graphics::DrawImageF(param_1,(Image *)pRVar4,*pfVar3,pfVar3[1]);
      if (fVar5 == 1.0) {
        *(undefined1 *)(pfVar3 + 4) = 0;
      }
      Sexy::Graphics::PopState(param_1);
    }
    std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&uStack_28);
  }
  if (this[0x1a] == (NewPVPAreaMist)0x0) {
    uStack_20 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x70));
    uStack_18 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x70));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&uStack_20,(__normal_iterator *)&uStack_18),
          bVar2) {
      pfVar3 = (float *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_20);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pfVar3 + 0xc));
      Sexy::Graphics::DrawImageF
                (param_1,(Image *)pRVar4,pfVar3[2] + *pfVar3,pfVar3[1],(TRect *)(pfVar3 + 6));
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&uStack_20);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPAreaMist::NewPVPAreaMist() */

void __thiscall NewPVPAreaMist::NewPVPAreaMist(NewPVPAreaMist *this)

{
  undefined4 uVar1;
  
  NewPVPArea::NewPVPArea((NewPVPArea *)this);
  this[0x19] = (NewPVPAreaMist)0x0;
  this[0x1a] = (NewPVPAreaMist)0x0;
  *(undefined ***)this = &PTR_GetClass_0664d0b0;
  this[0x1b] = (NewPVPAreaMist)0x0;
  this[0x1c] = (NewPVPAreaMist)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x24) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  return;
}


/* NewPVPAreaMist::StaticNew() */

NewPVPAreaMist * NewPVPAreaMist::StaticNew(void)

{
  NewPVPAreaMist *this;
  
  this = ::operator_new(0x88);
  NewPVPAreaMist(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaMist::StreetLampUseSkill() */

void __thiscall NewPVPAreaMist::StreetLampUseSkill(NewPVPAreaMist *this)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  Point aPStack_10 [8];
  long local_8;
  
  iVar4 = 0;
  this[0x1c] = (NewPVPAreaMist)0x1;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x40));
  lVar2 = *(long *)(gLawnApp + 0x9f0);
  if (0 < *(int *)(lVar2 + 0xf8)) {
    do {
      iVar3 = -1;
      if (-2 < *(int *)(lVar2 + 0xfc)) {
        do {
          iVar1 = iVar3 + 1;
          Sexy::Point::Point(aPStack_10,iVar4,iVar3);
          WarMistModule::AddEmptyRect((WarMistModule *)this,aPStack_10);
          lVar2 = *(long *)(gLawnApp + 0x9f0);
          iVar3 = iVar1;
        } while (iVar1 <= *(int *)(lVar2 + 0xfc));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(lVar2 + 0xf8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaMist::RealRefreshRect() */

void __thiscall NewPVPAreaMist::RealRefreshRect(NewPVPAreaMist *this)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  long extraout_x0;
  long lVar4;
  RtObject *this_00;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1b] != (NewPVPAreaMist)0x0) {
    this[0x1b] = (NewPVPAreaMist)0x0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x40));
    Board::GetGridBoundingRect();
    EntityFinder::GetEntitiesTouchingRectangle(avStack_20,1,aRStack_30,0xffffffff,0xffffffff);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      this_00 = (RtObject *)*puVar3;
      nop();
      if (((this_00 != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<Plant>(this_00), bVar1)) &&
         (iVar2 = FUN_034ad7c8(*(undefined1 *)(extraout_x0 + 0x299)), iVar2 == 0)) {
        Plant::GetType();
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        bVar1 = std::operator==((string *)(lVar4 + 8),"streetlamp");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        if (bVar1) {
          WarMistModule::CheckStreetEffect((WarMistModule *)this,(BoardEntity *)*puVar3);
        }
        else {
          Plant::GetType();
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          bVar1 = std::operator==((string *)(lVar4 + 8),"torchwood");
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          if (bVar1) {
            WarMistModule::CheckTorchWoodEffect((WarMistModule *)this,(BoardEntity *)*puVar3);
          }
          else {
            Plant::GetType();
            lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
            bVar1 = std::operator==((string *)(lVar4 + 8),"blover");
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
            if (bVar1) {
              CheckBloverEffect(this);
            }
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPAreaMist::~NewPVPAreaMist() */

void __thiscall NewPVPAreaMist::~NewPVPAreaMist(NewPVPAreaMist *this)

{
  *(undefined ***)this = &PTR_GetClass_0664d0b0;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<MistImageInfo,std::allocator<MistImageInfo>>::~vector
            ((vector<MistImageInfo,std::allocator<MistImageInfo>> *)(this + 0x70));
  std::vector<SupplymentInfo,std::allocator<SupplymentInfo>>::~vector
            ((vector<SupplymentInfo,std::allocator<SupplymentInfo>> *)(this + 0x58));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x40));
  std::vector<MistImageInfo,std::allocator<MistImageInfo>>::~vector
            ((vector<MistImageInfo,std::allocator<MistImageInfo>> *)(this + 0x28));
  NewPVPArea::~NewPVPArea((NewPVPArea *)this);
  return;
}


/* NewPVPAreaMist::~NewPVPAreaMist() */

void __thiscall NewPVPAreaMist::~NewPVPAreaMist(NewPVPAreaMist *this)

{
  ~NewPVPAreaMist(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaMist::InitMistImage() */

void __thiscall NewPVPAreaMist::InitMistImage(NewPVPAreaMist *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long extraout_x0;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Point aPStack_68 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  WalkingOutZombie aWStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06aa3fb8);
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06aa42b0);
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06aa3a80);
  lVar6 = *(long *)(gLawnApp + 0x9f0);
  if (0 < *(int *)(lVar6 + 0xf8)) {
    iVar9 = 0xb4;
    iVar8 = 0;
    do {
      if (-2 < *(int *)(lVar6 + 0xfc)) {
        iVar7 = 0x8c - iVar2;
        iVar4 = -1;
        do {
          iVar3 = Sexy::Rand(3);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    (aRStack_60,(RtWeakPtrBase *)(aRStack_58 + (long)iVar3 * 8));
          iVar3 = iVar4 + 1;
          Sexy::Point::Point(aPStack_68,iVar8,iVar4);
          iVar4 = FUN_034b73dc(iVar9 + iVar1 * *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
          iVar5 = FUN_034b73dc(iVar7);
          MistImageInfo::MistImageInfo
                    ((MistImageInfo *)(float)iVar4,(float)iVar5,0,aWStack_40,aRStack_60,aPStack_68);
          std::vector<MistImageInfo,std::allocator<MistImageInfo>>::push_back
                    ((vector<MistImageInfo,std::allocator<MistImageInfo>> *)(this + 0x28),
                     (MistImageInfo *)aWStack_40);
          WalkingOutZombie::~WalkingOutZombie(aWStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
          lVar6 = *(long *)(gLawnApp + 0x9f0);
          iVar7 = iVar7 + iVar2;
          iVar4 = iVar3;
        } while (iVar3 <= *(int *)(lVar6 + 0xfc));
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + iVar1;
    } while (iVar8 < *(int *)(lVar6 + 0xf8));
  }
  EntityComponent_GroundEffect::GetEffect();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aWStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aWStack_40);
  iVar1 = FUN_034b73dc((*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) - *(int *)(extraout_x0 + 0x28))
                       * iVar1);
  *(float *)(this + 0x20) = (float)-iVar1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NewPVPAreaMist::onGameplayStarted() */

void __thiscall NewPVPAreaMist::onGameplayStarted(NewPVPAreaMist *this)

{
  InitMistImage(this);
  this[0x19] = (NewPVPAreaMist)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaMist::SetMistImagePos(float, float) */

void __thiscall NewPVPAreaMist::SetMistImagePos(NewPVPAreaMist *this,float param_1,float param_2)

{
  vector<MistImageInfo,std::allocator<MistImageInfo>> *this_00;
  vector<SupplymentInfo,std::allocator<SupplymentInfo>> *this_01;
  MistImageInfo MVar1;
  NewPVPAreaMist NVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  MistImageInfo *this_02;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *this_03;
  int *piVar12;
  MistImageInfo *pMVar13;
  SupplymentInfo *pSVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  DVec2 aDStack_b0 [8];
  Point aPStack_a8 [8];
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  Insets aIStack_90 [4];
  int local_8c;
  int local_84;
  undefined8 local_80;
  uint local_78;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_70 [24];
  undefined8 local_58 [3];
  undefined8 local_40;
  float local_38;
  int local_28;
  int local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (vector<MistImageInfo,std::allocator<MistImageInfo>> *)(this + 0x70);
  this_01 = (vector<SupplymentInfo,std::allocator<SupplymentInfo>> *)(this + 0x58);
  local_8 = ___stack_chk_guard;
  std::vector<SupplymentInfo,std::allocator<SupplymentInfo>>::clear(this_01);
  std::vector<MistImageInfo,std::allocator<MistImageInfo>>::clear(this_00);
  iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
  local_d0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
  local_c8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x28));
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_d0,(__normal_iterator *)&local_c8);
  if (bVar3) {
    do {
      this_02 = (MistImageInfo *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d0);
      MVar1 = this_02[0xe];
      *(float *)this_02 = *(float *)this_02 + param_1;
      *(float *)(this_02 + 4) = *(float *)(this_02 + 4) + param_2;
      MistImageInfo::Reset(this_02);
      fVar19 = *(float *)this_02;
      fVar17 = *(float *)(this_02 + 4);
      pLVar11 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this_02 + 0x30));
      iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      this_03 = (SalesProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this_02 + 0x30));
      iVar8 = SalesProgressBar::GetCurrentLevel(this_03);
      Sexy::Insets::Insets((Insets *)&local_a0,(int)fVar19,(int)fVar17,iVar7,iVar8);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_70);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_58);
      local_c0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x40));
      local_b8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x40));
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8),
            bVar3) {
        piVar12 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
        if ((this[0x1a] != (NewPVPAreaMist)0x0) && (this_02[0xe] != (MistImageInfo)0x0))
        goto LAB_034f08e8;
        iVar7 = FUN_034b73dc(iVar5 * *piVar12 + 200);
        iVar8 = FUN_034b73dc(iVar6 * piVar12[1] + 0xa0);
        iVar9 = FUN_034b73dc(iVar5);
        iVar10 = FUN_034b73dc(iVar6);
        Sexy::Insets::Insets(aIStack_90,iVar7,iVar8,iVar9,iVar10);
        cVar4 = Sexy::TRect<int>::Intersects((TRect<int> *)&local_a0,(TRect *)aIStack_90);
        if ((cVar4 != '\0') &&
           ((local_9c <= local_8c && (local_8c + local_84 <= local_9c + local_94)))) {
          Sexy::TRect<int>::Intersection((TRect *)&local_a0);
          if ((int)local_80 == local_a0) {
            this_02[0xc] = (MistImageInfo)0x1;
            fVar17 = (float)(int)local_78;
            *(float *)(this_02 + 8) = fVar17;
            if (this_02[0xd] == (MistImageInfo)0x0) {
              iVar7 = local_98 - local_78;
            }
            else {
              iVar7 = ~local_78 + *(int *)(this_02 + 0x20);
            }
            fVar19 = *(float *)this_02;
            *(int *)(this_02 + 0x20) = iVar7;
            *(int *)(this_02 + 0x24) = local_94;
            *(uint *)(this_02 + 0x18) = local_78;
            *(undefined4 *)(this_02 + 0x1c) = 0;
            iVar7 = FUN_034b73dc(0x1e);
            DVec2::DVec2(aDStack_b0,(fVar17 + fVar19) - (float)iVar7,*(float *)(this_02 + 4));
            Sexy::Point::Point(aPStack_a8,(TPoint *)(this_02 + 0x28));
            SupplymentInfo::SupplymentInfo((SupplymentInfo *)&local_40,aDStack_b0,aPStack_a8,1);
            std::vector<SupplymentInfo,std::allocator<SupplymentInfo>>::push_back
                      ((vector<SupplymentInfo,std::allocator<SupplymentInfo>> *)avStack_70,
                       (SupplymentInfo *)&local_40);
          }
          else if ((int)local_80 + local_78 == local_a0 + local_98) {
            this_02[0xd] = (MistImageInfo)0x1;
            if (this_02[0xc] == (MistImageInfo)0x0) {
              *(undefined4 *)(this_02 + 0x18) = 0;
              iVar7 = local_98 - local_78;
            }
            else {
              iVar7 = ~local_78 + *(int *)(this_02 + 0x20);
            }
            fVar19 = (float)local_98;
            fVar17 = *(float *)this_02;
            *(int *)(this_02 + 0x24) = local_94;
            fVar20 = (float)(int)local_78;
            *(int *)(this_02 + 0x20) = iVar7;
            *(undefined4 *)(this_02 + 0x1c) = 0;
            iVar7 = FUN_034b73dc(0x1e);
            DVec2::DVec2(aDStack_b0,((fVar19 + fVar17) - fVar20) - (float)iVar7,
                         *(float *)(this_02 + 4));
            Sexy::Point::Point(aPStack_a8,(TPoint *)(this_02 + 0x28));
            SupplymentInfo::SupplymentInfo((SupplymentInfo *)&local_40,aDStack_b0,aPStack_a8,0);
            std::vector<SupplymentInfo,std::allocator<SupplymentInfo>>::push_back
                      ((vector<SupplymentInfo,std::allocator<SupplymentInfo>> *)avStack_70,
                       (SupplymentInfo *)&local_40);
          }
          else {
            NVar2 = this[0x1a];
            this_02[0xe] = (MistImageInfo)0x1;
            if (NVar2 == (NewPVPAreaMist)0x0) {
              MistImageInfo::MistImageInfo((MistImageInfo *)&local_40,this_02);
              local_20 = (int)((float)(int)local_80 - (float)local_40);
              std::vector<MistImageInfo,std::allocator<MistImageInfo>>::push_back
                        ((vector<MistImageInfo,std::allocator<MistImageInfo>> *)local_58,
                         (MistImageInfo *)&local_40);
              local_38 = ((float)(int)local_80 - (float)local_40) + (float)(int)local_78;
              pLVar11 = (LotteryResultProgressBar *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
              iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
              local_28 = (int)local_38;
              local_20 = (int)((float)iVar7 - local_38);
              std::vector<MistImageInfo,std::allocator<MistImageInfo>>::push_back
                        ((vector<MistImageInfo,std::allocator<MistImageInfo>> *)local_58,
                         (MistImageInfo *)&local_40);
              WalkingOutZombie::~WalkingOutZombie((WalkingOutZombie *)&local_40);
            }
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c0);
      }
      NVar2 = this[0x1a];
      if (this_02[0xe] == (MistImageInfo)0x0) {
LAB_034f077c:
        if (*(int *)(this_02 + 0x20) < 1) {
          *(undefined4 *)(this_02 + 0x20) = 0;
          this_02[0xe] = (MistImageInfo)0x1;
          if (NVar2 != (NewPVPAreaMist)0x0) goto LAB_034f08f4;
          goto LAB_034f086c;
        }
        if (NVar2 != (NewPVPAreaMist)0x0) {
          if (MVar1 != this_02[0xe]) goto LAB_034f079c;
          if (MVar1 != (MistImageInfo)0x0) goto LAB_034f086c;
          goto LAB_034f0894;
        }
        if (this_02[0xe] != (MistImageInfo)0x0) {
          *(undefined8 *)(this_02 + 0x18) = 0;
          *(undefined8 *)(this_02 + 0x20) = 0;
        }
      }
      else {
        if (NVar2 == (NewPVPAreaMist)0x0) {
          if (this_02[0xc] == (MistImageInfo)0x0) {
            pMVar13 = (MistImageInfo *)FUN_034b0570(local_58[0],0);
            std::vector<MistImageInfo,std::allocator<MistImageInfo>>::push_back(this_00,pMVar13);
          }
          if (this_02[0xd] == (MistImageInfo)0x0) {
            pMVar13 = (MistImageInfo *)FUN_034b0570(local_58[0],1);
            std::vector<MistImageInfo,std::allocator<MistImageInfo>>::push_back(this_00,pMVar13);
          }
          NVar2 = this[0x1a];
          goto LAB_034f077c;
        }
LAB_034f08e8:
        if (*(int *)(this_02 + 0x20) < 1) {
          this_02[0xe] = (MistImageInfo)0x1;
          *(undefined4 *)(this_02 + 0x20) = 0;
          if (MVar1 == (MistImageInfo)0x1) {
            *(undefined8 *)(this_02 + 0x18) = 0;
            *(undefined8 *)(this_02 + 0x20) = 0;
            goto LAB_034f07c8;
          }
LAB_034f079c:
          uVar18 = PVZ_T();
          this_02[0x10] = (MistImageInfo)0x1;
          *(undefined4 *)(this_02 + 0x14) = uVar18;
          if (MVar1 == (MistImageInfo)0x0) goto LAB_034f0910;
          this_02[0xf] = (MistImageInfo)0x1;
        }
        else {
LAB_034f08f4:
          if (MVar1 == (MistImageInfo)0x1) goto LAB_034f086c;
          uVar18 = PVZ_T();
          this_02[0x10] = (MistImageInfo)0x1;
          *(undefined4 *)(this_02 + 0x14) = uVar18;
LAB_034f0910:
          this_02[0xf] = (MistImageInfo)0x0;
        }
        if (this_02[0xe] == (MistImageInfo)0x0) {
          if (this[0x1a] != (NewPVPAreaMist)0x0) {
LAB_034f0894:
            local_80 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)avStack_70);
            local_40 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)avStack_70);
            while (bVar3 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_80,(__normal_iterator *)&local_40)
                  , bVar3) {
              pSVar14 = (SupplymentInfo *)
                        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
              std::vector<SupplymentInfo,std::allocator<SupplymentInfo>>::push_back(this_01,pSVar14)
              ;
              __gnu_cxx::
              __normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
              ::operator++((__normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
                            *)&local_80);
            }
          }
        }
        else {
LAB_034f086c:
          *(undefined8 *)(this_02 + 0x18) = 0;
          *(undefined8 *)(this_02 + 0x20) = 0;
        }
      }
LAB_034f07c8:
      std::vector<MistImageInfo,std::allocator<MistImageInfo>>::~vector
                ((vector<MistImageInfo,std::allocator<MistImageInfo>> *)local_58);
      std::vector<SupplymentInfo,std::allocator<SupplymentInfo>>::~vector
                ((vector<SupplymentInfo,std::allocator<SupplymentInfo>> *)avStack_70);
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_d0);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_d0,(__normal_iterator *)&local_c8);
    } while (bVar3);
  }
  if (this[0x1a] != (NewPVPAreaMist)0x0) {
    local_58[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)this_01);
    while( true ) {
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_01);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)local_58,(__normal_iterator *)&local_40);
      if (!bVar3) break;
      lVar15 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_58);
      if (*(char *)(lVar15 + 0x10) == '\0') {
        lVar16 = WarMistModule::GetWarMistModule
                           ((WarMistModule *)this,*(int *)(lVar15 + 8) + 1,*(int *)(lVar15 + 0xc));
      }
      else {
        lVar16 = WarMistModule::GetWarMistModule
                           ((WarMistModule *)this,*(int *)(lVar15 + 8) + -1,*(int *)(lVar15 + 0xc));
      }
      if ((lVar16 == 0) || (*(char *)(lVar16 + 0xe) != '\0')) {
        lVar16 = WarMistModule::GetWarMistModule
                           ((WarMistModule *)this,*(int *)(lVar15 + 8),*(int *)(lVar15 + 0xc));
        if (*(char *)(lVar15 + 0x10) == '\0') {
          pLVar11 = (LotteryResultProgressBar *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar16 + 0x30));
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
          *(int *)(lVar16 + 0x20) =
               (int)(((float)*(int *)(lVar16 + 0x20) - *(float *)(lVar16 + 8)) +
                    (float)(iVar5 - *(int *)(lVar16 + 0x20)));
        }
        else {
          fVar17 = *(float *)(lVar16 + 8);
          *(undefined4 *)(lVar16 + 0x18) = 0;
          *(undefined4 *)(lVar16 + 8) = 0;
          *(int *)(lVar16 + 0x20) = (int)((float)*(int *)(lVar16 + 0x20) + fVar17);
        }
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_40,(__normal_iterator *)local_58);
        local_58[0] = std::vector<SupplymentInfo,std::allocator<SupplymentInfo>>::erase
                                (this_01,local_40);
      }
      else {
        __gnu_cxx::
        __normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
        ::operator++((__normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
                      *)local_58);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaMist::Update() */

void __thiscall NewPVPAreaMist::Update(NewPVPAreaMist *this)

{
  uint uVar1;
  long extraout_x0;
  float fVar2;
  float fVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x19] != (NewPVPAreaMist)0x0) {
    fVar2 = 0.0;
    if (this[0x1a] == (NewPVPAreaMist)0x0) {
      EntityComponent_GroundEffect::GetEffect();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      fVar2 = (float)PVZ_Dt();
      fVar4 = *(float *)(this + 0x20);
      fVar2 = (float)(int)(fVar2 * *(float *)(extraout_x0 + 0x20));
      uVar1 = (int)fVar4 >> 0x1f;
      fVar3 = (float)(int)(((int)fVar4 ^ uVar1) - uVar1) - fVar2;
      if (fVar4 < 0.0) {
        if (fVar3 <= 0.0) {
          fVar3 = fVar3 + fVar2;
          this[0x1a] = (NewPVPAreaMist)0x1;
          fVar2 = -fVar3;
          *(float *)(this + 0x20) = fVar3 + fVar4;
          UpdateEmptyRect(this);
        }
        else {
          fVar4 = fVar2 + fVar4;
          fVar2 = -fVar2;
          *(float *)(this + 0x20) = fVar4;
        }
      }
      else if (fVar3 <= 0.0) {
        fVar2 = fVar2 + fVar3;
        this[0x1a] = (NewPVPAreaMist)0x1;
        *(float *)(this + 0x20) = fVar4 - fVar2;
      }
      else {
        *(float *)(this + 0x20) = fVar4 - fVar2;
      }
    }
    RealRefreshRect(this);
    SetMistImagePos(this,fVar2,0.0);
    MistyIntervalUpdata(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewPVPAreaMist::Activate() */

void __thiscall NewPVPAreaMist::Activate(NewPVPAreaMist *this)

{
  undefined *puVar1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  CBMemberTranslatorX aCStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  NewPVPArea::Activate((NewPVPArea *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameplayStarted);
  Sexy::Delegate0::Delegate0<NewPVPAreaMist,void(NewPVPAreaMist::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::LevelStarting,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantRefresh);
  local_c0 = local_80;
  uStack_b8 = uStack_78;
  local_b0 = local_70;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<NewPVPAreaMist,void(NewPVPAreaMist::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlanted,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantRefresh);
  local_b0 = local_58;
  local_c0 = local_68;
  uStack_b8 = uStack_60;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<NewPVPAreaMist,void(NewPVPAreaMist::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDestory,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantRefresh);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<NewPVPAreaMist,void(NewPVPAreaMist::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::StreetLampSheep,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StreetLampUseSkill);
  Sexy::Delegate0::Delegate0<NewPVPAreaMist,void(NewPVPAreaMist::*)()>(aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::StreetLampApplyFood,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StreetLampUseSkillEnd);
  Sexy::Delegate0::Delegate0<NewPVPAreaMist,void(NewPVPAreaMist::*)()>(aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::StreetLampEndFoodEffect,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

