// Class: ProtectorShieldSlice


/* ProtectorShieldSlice::ProtectorShieldSlice() */

void __thiscall ProtectorShieldSlice::ProtectorShieldSlice(ProtectorShieldSlice *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProtectorShieldSlice::ProtectorShieldSlice(GridItemProtectorShield*) */

void __thiscall
ProtectorShieldSlice::ProtectorShieldSlice
          (ProtectorShieldSlice *this,GridItemProtectorShield *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(undefined4 *)(this + 0xc) = 0;
  local_8 = ___stack_chk_guard;
  *this = (ProtectorShieldSlice)0x0;
  this[1] = (ProtectorShieldSlice)0x0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  this[0x18] = (ProtectorShieldSlice)0x0;
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x10),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03e0fe9c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ProtectorShieldSlice::Draw(Sexy::Graphics*) */

void __thiscall ProtectorShieldSlice::Draw(ProtectorShieldSlice *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  GridItemProtectorShield *pGVar4;
  Image *pIVar5;
  long lVar6;
  LotteryResultProgressBar *pLVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 extraout_var [12];
  undefined1 extraout_var_00 [12];
  undefined1 auVar17 [16];
  undefined1 extraout_var_01 [12];
  undefined4 local_48;
  undefined4 local_44;
  GraphicsAutoState aGStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  local_48 = 0x40a00000;
  local_8 = ___stack_chk_guard;
  local_44 = 0x3dcccccd;
  if (this[0x18] == (ProtectorShieldSlice)0x0) {
    fVar11 = (float)FUN_03e0ede8(0x42a00000);
    fVar12 = (float)FUN_03e0ede8(0x43110000);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_38,fVar11,-fVar12,0.0);
  }
  else {
    fVar11 = (float)FUN_03e0ede8(0x42a00000);
    fVar12 = (float)FUN_03e0ede8(0x43110000);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_38,-fVar11,-fVar12,0.0);
  }
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10);
  pGVar4 = (GridItemProtectorShield *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar8 = 0;
  GridItemProtectorShield::GetShieldLeft(pGVar4);
  fVar11 = (float)FUN_03e0ede8();
  do {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
    fVar12 = (float)PVZ_T();
    fVar12 = fmodf(fVar12 + (float)iVar8 * 0.5555556,5.0);
    local_18[0] = 0;
    auVar17._4_12_ = extraout_var;
    auVar17._0_4_ = fVar12;
    fVar12 = CurveLerp<float>(auVar17,0x40a00000,fVar12,(Insets *)local_18,&local_48,3);
    local_18[0] = 0;
    local_28[0] = local_38;
    auVar1._4_12_ = extraout_var_00;
    auVar1._0_4_ = fVar12;
    fVar13 = CurveLerp<float>(auVar1,0x40a00000,fVar12,(Insets *)local_28,(Insets *)local_18,3);
    pGVar4 = (GridItemProtectorShield *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    auVar17 = GridItemProtectorShield::GetTimeSinceHit(pGVar4);
    local_28[0] = 0x3f800000;
    local_18[0] = 0;
    fVar14 = CurveLerp<float>(auVar17,0x3e800000,auVar17._0_4_,(Insets *)local_28,(Insets *)local_18
                              ,2);
    fVar15 = (float)PVZ_T();
    fVar15 = (float)SampleSinWave(0.1,-1.0,1.0,fVar15 + (float)iVar8 * 0.05);
    pGVar4 = (GridItemProtectorShield *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    auVar17 = GridItemProtectorShield::CalculateShieldExpansionScale(pGVar4);
    local_18[0] = 0;
    local_28[0] = local_34;
    fVar16 = CurveLerp<float>(auVar17,0x40a00000,fVar12,(Insets *)local_28,(Insets *)local_18,1);
    fVar16 = fVar16 * auVar17._0_4_;
    Sexy::Graphics::Translate
              (param_1,(int)((fVar13 + fVar14 * fVar15 * 5.0) * auVar17._0_4_),(int)fVar16);
    local_18[0] = 0x3f800000;
    auVar2._4_12_ = extraout_var_01;
    auVar2._0_4_ = fVar16;
    fVar12 = CurveLerp<float>(auVar2,0x40a00000,fVar12,&local_44,(Insets *)local_18,3);
    Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,(int)(fVar12 * 255.0));
    Sexy::Graphics::SetColor(param_1,(Color *)local_18);
    Sexy::Graphics::SetColorizeImages(param_1,true);
    fVar12 = (float)FUN_03e0ede8(*(undefined4 *)(this + 4));
    iVar9 = (int)fVar12;
    if (this[1] != (ProtectorShieldSlice)0x0) {
      if (this[0x18] == (ProtectorShieldSlice)0x0) {
        pIVar5 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06adcaf8);
        Sexy::Graphics::DrawImage(param_1,pIVar5,(int)fVar11,iVar9);
      }
      else {
        pIVar5 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06adcaf8);
        Sexy::Graphics::DrawImageMirror(param_1,pIVar5,(int)fVar11,iVar9,true);
      }
      lVar6 = CachedResourcePtr<Sexy::Image>::operator->
                        ((CachedResourcePtr<Sexy::Image> *)&DAT_06adcaf8);
      iVar9 = iVar9 + *(int *)(lVar6 + 0x3c);
    }
    fVar12 = (float)FUN_03e0ede8(*(undefined4 *)(this + 8));
    iVar10 = (int)(fVar12 - (float)iVar9);
    if (*this == (ProtectorShieldSlice)0x0) {
      if (0 < iVar10) {
        if (this[0x18] != (ProtectorShieldSlice)0x0) goto LAB_03e1004c;
LAB_03e10174:
        pIVar5 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06adca90);
        pLVar7 = (LotteryResultProgressBar *)
                 CachedResourcePtr<Sexy::Image>::operator->
                           ((CachedResourcePtr<Sexy::Image> *)&DAT_06adca90);
        iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
        Sexy::Graphics::DrawImage(param_1,pIVar5,(int)fVar11,iVar9,iVar3,iVar10);
LAB_03e100c8:
        iVar9 = iVar9 + iVar10;
        goto LAB_03e100cc;
      }
    }
    else {
      lVar6 = CachedResourcePtr<Sexy::Image>::operator->
                        ((CachedResourcePtr<Sexy::Image> *)&DAT_06adca48);
      iVar10 = iVar10 - *(int *)(lVar6 + 0x3c);
      if (0 < iVar10) {
        if (this[0x18] == (ProtectorShieldSlice)0x0) goto LAB_03e10174;
LAB_03e1004c:
        lVar6 = CachedResourcePtr<Sexy::Image>::operator->
                          ((CachedResourcePtr<Sexy::Image> *)&DAT_06adca90);
        iVar3 = *(int *)(lVar6 + 0x38);
        lVar6 = CachedResourcePtr<Sexy::Image>::operator->
                          ((CachedResourcePtr<Sexy::Image> *)&DAT_06adca90);
        Sexy::Insets::Insets((Insets *)local_28,0,0,iVar3,*(int *)(lVar6 + 0x3c));
        pIVar5 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                    ((CachedResourcePtr<Sexy::Image> *)&DAT_06adca90);
        pLVar7 = (LotteryResultProgressBar *)
                 CachedResourcePtr<Sexy::Image>::operator->
                           ((CachedResourcePtr<Sexy::Image> *)&DAT_06adca90);
        iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
        Sexy::Insets::Insets((Insets *)local_18,(int)fVar11,iVar9,iVar3,iVar10);
        Sexy::Graphics::DrawImageMirror(param_1,pIVar5,(TRect *)local_18,(TRect *)local_28,true);
        goto LAB_03e100c8;
      }
LAB_03e100cc:
      if (*this != (ProtectorShieldSlice)0x0) {
        if (this[0x18] == (ProtectorShieldSlice)0x0) {
          pIVar5 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06adca48);
          Sexy::Graphics::DrawImage(param_1,pIVar5,(int)fVar11,iVar9);
        }
        else {
          pIVar5 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                                      ((CachedResourcePtr<Sexy::Image> *)&DAT_06adca48);
          Sexy::Graphics::DrawImageMirror(param_1,pIVar5,(int)fVar11,iVar9,true);
        }
      }
    }
    iVar8 = iVar8 + 1;
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
    if (iVar8 == 9) {
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


/* ProtectorShieldSlice::ProtectorShieldSlice(ProtectorShieldSlice const&) */

void __thiscall
ProtectorShieldSlice::ProtectorShieldSlice(ProtectorShieldSlice *this,ProtectorShieldSlice *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ProtectorShieldSlice PVar3;
  ProtectorShieldSlice PVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  PVar3 = *param_1;
  PVar4 = param_1[1];
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *this = PVar3;
  this[1] = PVar4;
  *(undefined4 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 8) = uVar2;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x10),(RtWeakPtrBase *)(param_1 + 0x10));
  this[0x18] = param_1[0x18];
  return;
}

