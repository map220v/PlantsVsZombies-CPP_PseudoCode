// Class: PostProcessOverlayWidget


/* PostProcessOverlayWidget::startPostProcessing() */

void __thiscall PostProcessOverlayWidget::startPostProcessing(PostProcessOverlayWidget *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  DeviceImage *this_00;
  long *plVar3;
  code *pcVar4;
  
  if (*(long *)(this + 0xf0) != 0) {
    return;
  }
  this_00 = ::operator_new(0x160);
  Sexy::DeviceImage::DeviceImage(this_00,gLawnApp);
  *(DeviceImage **)(this + 0xf0) = this_00;
  FUN_04302e04(this_00 + 0x18);
  plVar3 = *(long **)(this + 0xf0);
  uVar1 = *(undefined4 *)(gLawnApp + 0x724);
  uVar2 = *(undefined4 *)(gLawnApp + 0x728);
  plVar3[0xe] = 0;
  *(undefined4 *)(plVar3 + 7) = uVar1;
  pcVar4 = *(code **)(*plVar3 + 0x130);
  *(undefined4 *)((long)plVar3 + 0x3c) = uVar2;
  (*pcVar4)(plVar3,0,0);
  LawnApp::PushOverlaysToTop((LawnApp *)gLawnApp);
  this[0x6c] = (PostProcessOverlayWidget)0x1;
  return;
}


/* PostProcessOverlayWidget::endPostProcessing() */

void __thiscall PostProcessOverlayWidget::endPostProcessing(PostProcessOverlayWidget *this)

{
  if (*(long **)(this + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf0) + 0x18))();
    *(undefined8 *)(this + 0xf0) = 0;
  }
  this[0x6c] = (PostProcessOverlayWidget)0x0;
  return;
}


/* PostProcessOverlayWidget::ClearAll() */

void __thiscall PostProcessOverlayWidget::ClearAll(PostProcessOverlayWidget *this)

{
  std::vector<PostProcessItem,std::allocator<PostProcessItem>>::clear
            ((vector<PostProcessItem,std::allocator<PostProcessItem>> *)(this + 0xd8));
  endPostProcessing(this);
  return;
}


/* PostProcessOverlayWidget::PostProcessOverlayWidget() */

void __thiscall PostProcessOverlayWidget::PostProcessOverlayWidget(PostProcessOverlayWidget *this)

{
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_068318a0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  PlantHeadshot::Resize((PlantHeadshot *)this,(TRect *)(gLawnApp + 0x71c));
  this[0x6c] = (PostProcessOverlayWidget)0x0;
  *(undefined8 *)(this + 0xf0) = 0;
  ClearAll(this);
  return;
}


/* PostProcessOverlayWidget::~PostProcessOverlayWidget() */

void __thiscall PostProcessOverlayWidget::~PostProcessOverlayWidget(PostProcessOverlayWidget *this)

{
  *(undefined ***)this = &PTR_GetClass_068318a0;
  if (*(long **)(this + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf0) + 0x18))();
    *(undefined8 *)(this + 0xf0) = 0;
  }
  std::vector<PostProcessItem,std::allocator<PostProcessItem>>::~vector
            ((vector<PostProcessItem,std::allocator<PostProcessItem>> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PostProcessOverlayWidget::~PostProcessOverlayWidget() */

void __thiscall PostProcessOverlayWidget::~PostProcessOverlayWidget(PostProcessOverlayWidget *this)

{
  ~PostProcessOverlayWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PostProcessOverlayWidget::Update() */

void __thiscall PostProcessOverlayWidget::Update(PostProcessOverlayWidget *this)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar3 = *(undefined8 *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_04302d50(uVar3,*(undefined8 *)(this + 0xe0));
  uVar1 = (int)lVar2 - 1;
  if (-1 < (int)uVar1) {
    lVar4 = (long)(int)uVar1 + -1;
    lVar2 = lVar4;
    lVar6 = (long)(int)uVar1;
    while( true ) {
      lVar5 = lVar2;
      lVar2 = FUN_04302d70(uVar3,lVar6);
      fVar7 = *(float *)(lVar2 + 8);
      fVar9 = *(float *)(lVar2 + 4);
      fVar8 = (float)PVZ_RealT();
      if (fVar8 < fVar7 + fVar9) {
        uVar3 = *(undefined8 *)(this + 0xd8);
      }
      else {
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(this + 0xd8));
        local_18 = __gnu_cxx::
                   __normal_iterator<PostProcessItem*,std::vector<PostProcessItem,std::allocator<PostProcessItem>>>
                   ::operator+((__normal_iterator<PostProcessItem*,std::vector<PostProcessItem,std::allocator<PostProcessItem>>>
                                *)&local_20,lVar6);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_10,(__normal_iterator *)&local_18);
        std::vector<PostProcessItem,std::allocator<PostProcessItem>>::erase
                  ((vector<PostProcessItem,std::allocator<PostProcessItem>> *)(this + 0xd8),local_10
                  );
        uVar3 = *(undefined8 *)(this + 0xd8);
      }
      if (lVar5 == lVar4 - (ulong)uVar1) break;
      lVar2 = lVar5 + -1;
      lVar6 = lVar5;
    }
    lVar2 = FUN_04302d50(uVar3,*(undefined8 *)(this + 0xe0));
  }
  if ((lVar2 == 0) && (*(long *)(this + 0xf0) != 0)) {
    endPostProcessing(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PostProcessOverlayWidget::AddFlashbackIntro(float, Sexy::Color, Sexy::Color) */

void __thiscall
PostProcessOverlayWidget::AddFlashbackIntro
          (undefined4 param_1,PostProcessOverlayWidget *this,undefined8 *param_3,undefined8 *param_4
          )

{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined8 local_1c;
  undefined8 uStack_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PostProcessItem::PostProcessItem((PostProcessItem *)&local_38);
  local_38 = 1;
  local_34 = PVZ_RealT();
  local_2c = *param_3;
  uStack_24 = param_3[1];
  local_1c = *param_4;
  uStack_14 = param_4[1];
  local_30 = param_1;
  std::vector<PostProcessItem,std::allocator<PostProcessItem>>::push_back
            ((vector<PostProcessItem,std::allocator<PostProcessItem>> *)(this + 0xd8),
             (PostProcessItem *)&local_38);
  startPostProcessing(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PostProcessOverlayWidget::AddFlashbackOutro(float, Sexy::Color, Sexy::Color) */

void __thiscall
PostProcessOverlayWidget::AddFlashbackOutro
          (undefined4 param_1,PostProcessOverlayWidget *this,undefined8 *param_3,undefined8 *param_4
          )

{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined8 local_1c;
  undefined8 uStack_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PostProcessItem::PostProcessItem((PostProcessItem *)&local_38);
  local_38 = 2;
  local_34 = PVZ_RealT();
  local_2c = *param_3;
  uStack_24 = param_3[1];
  local_1c = *param_4;
  uStack_14 = param_4[1];
  local_30 = param_1;
  std::vector<PostProcessItem,std::allocator<PostProcessItem>>::push_back
            ((vector<PostProcessItem,std::allocator<PostProcessItem>> *)(this + 0xd8),
             (PostProcessItem *)&local_38);
  startPostProcessing(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PostProcessOverlayWidget::Draw(Sexy::Graphics*) */

void __thiscall PostProcessOverlayWidget::Draw(PostProcessOverlayWidget *this,Graphics *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  int *piVar7;
  RenderEffectDefinition *pRVar8;
  string *psVar9;
  Image *pIVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  float fVar14;
  float fVar15;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  int local_e8;
  int local_e4;
  Graphics aGStack_d0 [200];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = FUN_04302d50(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
  if (lVar6 == 0) goto LAB_04303760;
  lVar11 = 0;
  startPostProcessing(this);
  fVar14 = 0.0;
  bVar5 = false;
  bVar3 = false;
  Sexy::Graphics::Graphics(aGStack_d0,*(Image **)(this + 0xf0));
  Sexy::Color::Color((Color *)&local_118);
  Sexy::Color::Color((Color *)&local_108);
  uVar12 = *(undefined8 *)(this + 0xd8);
  lVar6 = FUN_04302d50(uVar12,*(undefined8 *)(this + 0xe0));
  fVar15 = fVar14;
  bVar2 = bVar5;
  bVar4 = false;
  if (lVar6 != 0) {
    do {
      bVar3 = bVar4;
      piVar7 = (int *)FUN_04302d70(uVar12,lVar11);
      iVar1 = *piVar7;
      if (iVar1 == 1) {
        fVar15 = (float)piVar7[2];
        bVar3 = true;
LAB_04303890:
        local_118 = *(undefined8 *)(piVar7 + 3);
        uStack_110 = *(undefined8 *)(piVar7 + 5);
        local_108 = *(undefined8 *)(piVar7 + 7);
        uStack_100 = *(undefined8 *)(piVar7 + 9);
        fVar14 = (float)piVar7[1];
      }
      else {
        if (iVar1 == 2) {
          fVar15 = (float)piVar7[2];
          bVar5 = true;
          goto LAB_04303890;
        }
        if (iVar1 == 3) {
          fVar15 = (float)piVar7[2];
          bVar2 = true;
          goto LAB_04303890;
        }
      }
      lVar11 = lVar11 + 1;
      bVar4 = bVar3;
    } while (lVar11 != lVar6);
  }
  if ((bVar2 <= bVar3) || (bVar5)) {
    if ((bVar2 < bVar3) && (!bVar5)) {
      pRVar8 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(aGStack_d0);
      CachedResourcePtr::operator_cast_to_RenderEffectDefinition_
                ((CachedResourcePtr *)&DAT_06af8300);
      psVar9 = (string *)Sexy::Graphics3D::GetEffect(pRVar8);
      pcVar13 = *(code **)(*(long *)psVar9 + 0x38);
      std::string::string((string *)&local_e8,"Default");
      (*pcVar13)(psVar9,(string *)&local_e8,1);
      std::string::~string((string *)&local_e8);
      nop();
      local_f8 = (float)PVZ_RealT();
      local_f8 = local_f8 - fVar14;
LAB_0430395c:
      std::string::string((string *)&local_e8,"Params");
      Sexy::RenderEffect::SetVector4(psVar9,(float *)&local_e8);
      std::string::~string((string *)&local_e8);
      nop();
      goto LAB_04303984;
    }
    if ((bVar2 < (bVar3 ^ 1U)) && (bVar5)) {
      pRVar8 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(aGStack_d0);
      CachedResourcePtr::operator_cast_to_RenderEffectDefinition_
                ((CachedResourcePtr *)&DAT_06af8300);
      psVar9 = (string *)Sexy::Graphics3D::GetEffect(pRVar8);
      pcVar13 = *(code **)(*(long *)psVar9 + 0x38);
      std::string::string((string *)&local_e8,"Default");
      (*pcVar13)(psVar9,(string *)&local_e8,1);
      std::string::~string((string *)&local_e8);
      nop();
      local_f8 = (float)PVZ_RealT();
      local_f8 = (fVar14 + fVar15) - local_f8;
      goto LAB_0430395c;
    }
  }
  else {
    pRVar8 = (RenderEffectDefinition *)Sexy::Graphics::Get3D(aGStack_d0);
    CachedResourcePtr::operator_cast_to_RenderEffectDefinition_((CachedResourcePtr *)&DAT_06af82d0);
    psVar9 = (string *)Sexy::Graphics3D::GetEffect(pRVar8);
    pcVar13 = *(code **)(*(long *)psVar9 + 0x38);
    std::string::string((string *)&local_e8,"Default");
    (*pcVar13)(psVar9,(string *)&local_e8,1);
    std::string::~string((string *)&local_e8);
    nop();
LAB_04303984:
    Sexy::RenderEffectAutoState::RenderEffectAutoState
              ((RenderEffectAutoState *)&local_e8,aGStack_d0,(RenderEffect *)psVar9,1);
    while (bVar5 = Sexy::RenderEffectAutoState::operator_cast_to_bool
                             ((RenderEffectAutoState *)&local_e8), bVar5) {
      Sexy::Graphics::DrawImage(aGStack_d0,*(Image **)(param_1 + 8),0,0);
      Sexy::RenderEffectAutoState::operator++((RenderEffectAutoState *)&local_e8);
    }
    Sexy::RenderEffectAutoState::~RenderEffectAutoState((RenderEffectAutoState *)&local_e8);
    Sexy::Point::Point((Point *)&local_e8,(int)*(float *)(param_1 + 0x10),
                       (int)*(float *)(param_1 + 0x14));
    pIVar10 = *(Image **)(this + 0xf0);
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    Sexy::Graphics::DrawImage(param_1,pIVar10,0,0);
    *(float *)(param_1 + 0x10) = (float)local_e8;
    *(float *)(param_1 + 0x14) = (float)local_e4;
  }
  Sexy::Graphics::~Graphics(aGStack_d0);
LAB_04303760:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

