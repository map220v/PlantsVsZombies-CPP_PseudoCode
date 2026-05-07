// Class: LinkedTilePropagation_ConnectingDotHandler


/* LinkedTilePropagation_ConnectingDotHandler::OnFadeOutDone(std::string const&) */

void LinkedTilePropagation_ConnectingDotHandler::OnFadeOutDone(string *param_1)

{
  param_1[0x20] = (string)0x1;
  return;
}


/* LinkedTilePropagation_ConnectingDotHandler::LinkedTilePropagation_ConnectingDotHandler() */

void __thiscall
LinkedTilePropagation_ConnectingDotHandler::LinkedTilePropagation_ConnectingDotHandler
          (LinkedTilePropagation_ConnectingDotHandler *this)

{
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 8));
  Sexy::Color::Color((Color *)(this + 0x10));
  this[0x20] = (LinkedTilePropagation_ConnectingDotHandler)0x0;
  return;
}


/* LinkedTilePropagation_ConnectingDotHandler::FadeIn(float) */

void LinkedTilePropagation_ConnectingDotHandler::FadeIn(float param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *in_x0;
  EffectAnimRig_LinkedTileConnect *this;
  
  this = (EffectAnimRig_LinkedTileConnect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(in_x0);
  EffectAnimRig_LinkedTileConnect::PlayOn(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LinkedTilePropagation_ConnectingDotHandler::Draw(Sexy::Graphics*) */

void __thiscall
LinkedTilePropagation_ConnectingDotHandler::Draw
          (LinkedTilePropagation_ConnectingDotHandler *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  SexyVector2 *extraout_x1;
  float fVar4;
  float fVar5;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x20] == (LinkedTilePropagation_ConnectingDotHandler)0x0) {
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
    fVar5 = (float)iVar2 * 1.5;
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,(float)iVar1 * 1.5,fVar5);
    local_40 = Sexy::SexyVector2::operator-((SexyVector2 *)(this + 8),(SexyVector2 *)&local_38);
    local_3c = fVar5;
    fVar4 = (float)FUN_03ceada0();
    local_38 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_40,fVar4);
    local_34 = fVar5;
    Sexy::SexyTransform2D::CreateTranslation((SexyTransform2D *)&local_38,extraout_x1);
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    PopAnimRig::SetPAMColor(pPVar3,(Color *)(this + 0x10));
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    PopAnimRig::SetRenderTransform(pPVar3,aSStack_30);
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
    PopAnimRig::Draw(pPVar3,param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LinkedTilePropagation_ConnectingDotHandler::Update() */

void __thiscall
LinkedTilePropagation_ConnectingDotHandler::Update(LinkedTilePropagation_ConnectingDotHandler *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  fVar1 = (float)PVZ_T();
  fVar2 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LinkedTilePropagation_ConnectingDotHandler::FadeOut(float) */

void LinkedTilePropagation_ConnectingDotHandler::FadeOut(float param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *in_x0;
  EffectAnimRig_LinkedTileConnect *pEVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pEVar1 = (EffectAnimRig_LinkedTileConnect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(in_x0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)in_x0,OnFadeOutDone);
  Sexy::Delegate1<std::string_const&>::
  Delegate1<LinkedTilePropagation_ConnectingDotHandler,void(LinkedTilePropagation_ConnectingDotHandler::*)(std::string_const&)>
            (aDStack_38,aCStack_50);
  EffectAnimRig_LinkedTileConnect::PlayOff(pEVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

