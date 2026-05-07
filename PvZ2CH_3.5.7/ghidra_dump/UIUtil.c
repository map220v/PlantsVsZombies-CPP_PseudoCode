// Class: UIUtil


/* UIUtil::ShowDialog(Sexy::Widget*) */

void UIUtil::ShowDialog(Widget *param_1)

{
  if (param_1 != (Widget *)0x0) {
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x60))(*(long **)(gLawnApp + 0x360),param_1);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0xb0))(*(long **)(gLawnApp + 0x360),param_1);
    LawnApp::PushOverlaysToTop(gLawnApp);
    Sexy::WidgetManager::AddBaseModal(*(WidgetManager **)(gLawnApp + 0x360),param_1);
    (**(code **)(**(long **)(gLawnApp + 0x360) + 0x98))(*(long **)(gLawnApp + 0x360),param_1);
  }
  return;
}


/* UIUtil::CloseDialog(Sexy::Widget*) */

void UIUtil::CloseDialog(Widget *param_1)

{
  if (param_1 != (Widget *)0x0) {
    (**(code **)(*(long *)gLawnApp[0x6c] + 0x68))((long *)gLawnApp[0x6c],param_1);
    Sexy::WidgetManager::RemoveBaseModal((WidgetManager *)gLawnApp[0x6c],param_1);
    (**(code **)(*gLawnApp + 0x150))(gLawnApp,param_1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void UIUtil::SetChildrenIgnoreMouseInput<UIWidgetImage>(Sexy::Widget*, bool) */

void UIUtil::SetChildrenIgnoreMouseInput<UIWidgetImage>(Widget *param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  string *psVar4;
  Widget *pWVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Widget *)0x0) {
    local_18 = FUN_04ba9ed8(*(undefined8 *)(param_1 + 8));
    local_10 = std::
               __make_move_if_noexcept_iterator<Sexy::IResStreamsDriver::TaskResource**,std::move_iterator<Sexy::IResStreamsDriver::TaskResource**>>
                         ((TaskResource **)(param_1 + 8));
    while (bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10),
          bVar1) {
      puVar3 = (undefined8 *)
               std::_List_const_iterator<Sexy::ActiveFontLayer>::operator*
                         ((_List_const_iterator<Sexy::ActiveFontLayer> *)&local_18);
      pWVar5 = (Widget *)*puVar3;
      psVar4 = (string *)WidgetFactory<UIWidgetImage*>::GetTypeName();
      cVar2 = std::operator==((string *)(pWVar5 + 200),psVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pWVar5 + 0x90))(pWVar5,param_2);
      }
      SetChildrenIgnoreMouseInput<UIWidgetImage>(pWVar5,param_2);
      std::_List_const_iterator<Sexy::FontLayer>::operator++
                ((_List_const_iterator<Sexy::FontLayer> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUtil::DrawPopAnim(Sexy::Graphics*, PopAnimRig*, int, int, float, float, float) */

void UIUtil::DrawPopAnim(Graphics *param_1,PopAnimRig *param_2,int param_3,int param_4,float param_5
                        ,float param_6,float param_7)

{
  long lVar1;
  float local_38;
  float local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyTransform2D::Scale(aSStack_30,param_5,param_5);
  if ((param_6 != 0.0) || (param_7 != 0.0)) {
    lVar1 = FUN_04fad004(*(undefined8 *)(param_2 + 0x20));
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_38,(float)*(int *)(lVar1 + 0x3c),(float)*(int *)(lVar1 + 0x40));
    local_38 = *(float *)(lVar1 + 0x28) * local_38 * param_5;
    local_34 = *(float *)(lVar1 + 0x28) * local_34 * param_5;
    FUN_04facfa0(-(param_6 * local_38),-(param_7 * local_34),auStack_28,auStack_1c);
  }
  FUN_04facfa0((float)param_3,(float)param_4,auStack_28,auStack_1c);
  PopAnimRig::Draw(param_2,param_1,aSStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIUtil::SetPopAnimTransform(PopAnimRig*, int, int, float, float, float) */

void UIUtil::SetPopAnimTransform
               (PopAnimRig *param_1,int param_2,int param_3,float param_4,float param_5,
               float param_6)

{
  long lVar1;
  float local_38;
  float local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyTransform2D::Scale(aSStack_30,param_4,param_4);
  if ((param_5 != 0.0) || (param_6 != 0.0)) {
    lVar1 = FUN_04fad004(*(undefined8 *)(param_1 + 0x20));
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_38,(float)*(int *)(lVar1 + 0x3c),(float)*(int *)(lVar1 + 0x40));
    local_38 = *(float *)(lVar1 + 0x28) * local_38 * param_4;
    local_34 = *(float *)(lVar1 + 0x28) * local_34 * param_4;
    FUN_04facfa0(-(param_5 * local_38),-(param_6 * local_34),auStack_28,auStack_1c);
  }
  FUN_04facfa0((float)param_2,(float)param_3,auStack_28,auStack_1c);
  PopAnimRig::SetRenderTransform(param_1,aSStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

