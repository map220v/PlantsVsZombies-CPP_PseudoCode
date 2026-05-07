// Class: DefaultWorldMapEditor


/* DefaultWorldMapEditor::DrawMapLayers(Sexy::Graphics*, std::vector<MapRenderItem,
   std::allocator<MapRenderItem> >&, WorldMapCamera*, ParallaxCache&) */

void __thiscall
DefaultWorldMapEditor::DrawMapLayers
          (DefaultWorldMapEditor *this,Graphics *param_1,vector *param_2,WorldMapCamera *param_3,
          ParallaxCache *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  Sexy::Graphics::SetColorizeImages(param_1,false);
  uVar4 = 0;
  while( true ) {
    uVar6 = *(undefined8 *)param_2;
    uVar2 = FUN_0450e520(uVar6,*(undefined8 *)(param_2 + 8));
    if (uVar2 <= uVar4) break;
    puVar1 = (undefined8 *)FUN_0450e52c(uVar6,uVar4);
    plVar3 = (long *)*puVar1;
    pcVar5 = *(code **)(*plVar3 + 0x10);
    ParallaxCache::GetOffsetForLayer(param_4,(int)*(char *)((long)plVar3 + 0x8c));
    (*pcVar5)(plVar3,param_1,param_3);
    uVar4 = uVar4 + 1;
  }
  return;
}


/* DefaultWorldMapEditor::DefaultWorldMapEditor() */

void __thiscall DefaultWorldMapEditor::DefaultWorldMapEditor(DefaultWorldMapEditor *this)

{
  WorldMapEditor::WorldMapEditor((WorldMapEditor *)this);
  *(undefined ***)this = &PTR_nop_06857880;
  return;
}

