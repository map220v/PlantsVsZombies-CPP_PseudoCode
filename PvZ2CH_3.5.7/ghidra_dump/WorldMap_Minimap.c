// Class: WorldMap_Minimap


/* WorldMap_Minimap::~WorldMap_Minimap() */

void __thiscall WorldMap_Minimap::~WorldMap_Minimap(WorldMap_Minimap *this)

{
  *(undefined ***)this = &PTR_GetClass_0685f010;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_Minimap_0685f1b0;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WorldMap_Minimap::~WorldMap_Minimap() */

void __thiscall WorldMap_Minimap::~WorldMap_Minimap(WorldMap_Minimap *this)

{
  ~WorldMap_Minimap(this + -0x10);
  return;
}


/* WorldMap_Minimap::~WorldMap_Minimap() */

void __thiscall WorldMap_Minimap::~WorldMap_Minimap(WorldMap_Minimap *this)

{
  ~WorldMap_Minimap(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WorldMap_Minimap::~WorldMap_Minimap() */

void __thiscall WorldMap_Minimap::~WorldMap_Minimap(WorldMap_Minimap *this)

{
  ~WorldMap_Minimap(this + -0x10);
  return;
}


/* WorldMap_Minimap::StaticGetClass() */

long * WorldMap_Minimap::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_Minimap",uVar2,StaticNew);
  return sClass;
}


/* WorldMap_Minimap::GetClass() const */

long * WorldMap_Minimap::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WorldMap_Minimap",uVar2,StaticNew);
  return sClass;
}


/* WorldMap_Minimap::WorldMap_Minimap() */

void __thiscall WorldMap_Minimap::WorldMap_Minimap(WorldMap_Minimap *this)

{
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_0685f010;
  *(undefined ***)(this + 0x10) = &PTR__WorldMap_Minimap_0685f1b0;
  Sexy::MemoryImage::TriRep::Tri::Tri((Tri *)(this + 0x164),1.0,0.0,0.0,1.0,0.0,0.0);
  this[0x163] = (WorldMap_Minimap)0x1;
  return;
}


/* WorldMap_Minimap::StaticNew() */

WorldMap_Minimap * WorldMap_Minimap::StaticNew(void)

{
  WorldMap_Minimap *this;
  
  this = ::operator_new(0x180);
  WorldMap_Minimap(this);
  return this;
}


/* WorldMap_Minimap::getMinimapRect() */

void WorldMap_Minimap::getMinimapRect(void)

{
  int iVar1;
  int iVar2;
  long in_x0;
  Insets *in_x8;
  
  iVar1 = FUN_045753f8(*(undefined4 *)(in_x0 + 0x38));
  iVar2 = FUN_045753fc(*(undefined4 *)(in_x0 + 0x3c));
  Sexy::Insets::Insets(in_x8,10,0x32,(int)((float)iVar1 - 20.0),(int)((float)iVar2 - 60.0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_Minimap::calcTransforms() */

void __thiscall WorldMap_Minimap::calcTransforms(WorldMap_Minimap *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = LawnApp::GetWorldMapList(gLawnApp);
  getMinimapRect();
  PieceConfig::PieceConfig((PieceConfig *)&local_20);
  fVar5 = (float)local_10;
  fVar2 = (float)*(int *)(lVar1 + 0x38);
  fVar3 = (float)*(int *)(lVar1 + 0x3c);
  fVar4 = (float)local_c;
  if (fVar2 / fVar3 < fVar5 / fVar4) {
    fVar2 = fVar4 / (fVar3 * 600.0);
    local_20 = (fVar5 - (float)(*(int *)(lVar1 + 0x38) * 600) * fVar2) * 0.5;
  }
  else {
    fVar2 = fVar5 / (fVar2 * 600.0);
    local_1c = (fVar4 - (float)(*(int *)(lVar1 + 0x3c) * 600) * fVar2) * 0.5;
  }
  FUN_045753dc((float)-*(int *)(lVar1 + 0x40),(float)-*(int *)(lVar1 + 0x44),this + 0x174,
               this + 0x178);
  Sexy::SimpleMatrix::Scale((SimpleMatrix *)(this + 0x164),fVar2,fVar2);
  FUN_045753dc((float)local_18 + local_20,(float)local_14 + local_1c,this + 0x174,this + 0x178);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WorldMap_Minimap::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_Minimap::Draw(WorldMap_Minimap *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  WorldDataManager *this_00;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  Image *pIVar9;
  ulong uVar10;
  float fVar11;
  GraphicsAutoState aGStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x163] != (WorldMap_Minimap)0x0) {
    calcTransforms(this);
    this[0x163] = (WorldMap_Minimap)0x0;
  }
  uVar10 = 0;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  lVar4 = WorldMapUtils::GetWorldMapList();
  lVar5 = FUN_04575404(*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
  if (lVar5 != 0) {
    do {
      this_00 = (WorldDataManager *)WorldMapUtils::GetWorldDataForEdit();
      lVar5 = WorldDataManager::FindWorldDataByIndexInMapList(this_00,(int)uVar10);
      if ((lVar5 != 0) && (*(int *)(lVar5 + 0x54) != 0)) {
        lVar6 = LawnApp::GetWorldMap(gLawnApp);
        lVar6 = FUN_04575400(*(undefined8 *)(lVar6 + 0x2f0));
        if (lVar5 == lVar6) {
          Sexy::Color::Color(aCStack_18,1);
          Sexy::Graphics::SetColor(param_1,aCStack_18);
          uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Shaded)
          ;
          iVar1 = FUN_04575470(0x14);
          iVar2 = FUN_045753f8(*(undefined4 *)(this + 0x38));
          fVar11 = (float)Sexy::PrimeTypeface::ParagraphHeightUnlimited;
          Sexy::ToWString((string *)(lVar5 + 0x38));
          Sexy::Color::Color(aCStack_18,1);
          Sexy::PrimeTypeface::DrawString_Paragraph
                    ((PrimeTypeface *)0x0,(float)iVar1,(float)iVar2,fVar11,uVar8,param_1,auStack_20,
                     0,0,aCStack_18,0);
          FUN_05476c50(auStack_20);
          this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
          this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
          uVar7 = PlayerInfo::GetNumKeys(this_02,(string *)(lVar5 + 0x38),false);
          Sexy::StrFormat(L"x %d",auStack_28,uVar7 & 0xffffffff);
          uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Shaded)
          ;
          iVar1 = FUN_04575470(0x28);
          FUN_05477b24(auStack_20,auStack_28);
          Sexy::Color::Color(aCStack_18,1);
          Sexy::PrimeTypeface::DrawString_Simple
                    ((PrimeTypeface *)0x0,(float)iVar1,uVar8,param_1,auStack_20,aCStack_18,0);
          FUN_05476c50(auStack_20);
          uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Shaded)
          ;
          FUN_05477b24(aCStack_18,auStack_28);
          iVar2 = Sexy::PrimeTypeface::StringWidth(uVar8,aCStack_18);
          FUN_05476c50(aCStack_18);
          lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11838);
          iVar1 = *(int *)(lVar5 + 0x38);
          pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11838);
          fVar11 = (float)(iVar2 + 10 + iVar1);
          iVar1 = FUN_045753f8(*(undefined4 *)(this + 0x38));
          iVar2 = FUN_04575470(0x1c);
          Sexy::Graphics::DrawImage(param_1,pIVar9,(int)(((float)iVar1 - fVar11) * 0.5),iVar2);
          iVar2 = FUN_045753f8(*(undefined4 *)(this + 0x38));
          lVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b11838);
          iVar1 = *(int *)(lVar5 + 0x38);
          uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_26_Shaded)
          ;
          iVar3 = FUN_04575470(0x26);
          FUN_05477b24(auStack_20,auStack_28);
          Sexy::Color::Color(aCStack_18,1);
          Sexy::PrimeTypeface::DrawString_Simple
                    ((PrimeTypeface *)
                     (float)(int)((float)iVar1 + 10.0 + ((float)iVar2 - fVar11) * 0.5),(float)iVar3,
                     uVar8,param_1,auStack_20,aCStack_18,0);
          FUN_05476c50(auStack_20);
          FUN_05476c50(auStack_28);
        }
      }
      uVar10 = uVar10 + 1;
      uVar7 = FUN_04575404(*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
    } while (uVar10 < uVar7);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* non-virtual thunk to WorldMap_Minimap::Draw(Sexy::Graphics*) */

void __thiscall WorldMap_Minimap::Draw(WorldMap_Minimap *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

