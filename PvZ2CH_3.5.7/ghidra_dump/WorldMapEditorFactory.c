// Class: WorldMapEditorFactory


/* WorldMapEditorFactory::WorldMapEditorFactory() */

void __thiscall WorldMapEditorFactory::WorldMapEditorFactory(WorldMapEditorFactory *this)

{
  WorldMapEditorFactory *pWVar1;
  
  Sexy::LazySingleton<WorldMapEditorFactory>::LazySingleton
            ((LazySingleton<WorldMapEditorFactory> *)this);
  *(undefined ***)this = &PTR__WorldMapEditorFactory_068578e0;
  *(undefined8 *)(this + 8) = 0;
  DefaultWorldMapEditor::DefaultWorldMapEditor((DefaultWorldMapEditor *)(this + 8));
  pWVar1 = this + 0x10;
  *(undefined4 *)pWVar1 = 0;
  SetFlag<DebugLogFlags>(pWVar1,2,1);
  SetFlag<DebugLogFlags>(pWVar1,4,1);
  SetFlag<DebugLogFlags>(pWVar1,8,1);
  SetFlag<DebugLogFlags>(pWVar1,0x10,1);
  return;
}


/* WorldMapEditorFactory::SetEditorEnabled(bool) */

void __thiscall WorldMapEditorFactory::SetEditorEnabled(WorldMapEditorFactory *this,bool param_1)

{
  SetFlag<DebugLogFlags>(this + 0x10,1,param_1);
  return;
}


/* WorldMapEditorFactory::IsEditorEnabled() */

bool __thiscall WorldMapEditorFactory::IsEditorEnabled(WorldMapEditorFactory *this)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(this + 0x10),1);
  return bVar1;
}


/* WorldMapEditorFactory::~WorldMapEditorFactory() */

void __thiscall WorldMapEditorFactory::~WorldMapEditorFactory(WorldMapEditorFactory *this)

{
  *(undefined ***)this = &PTR__WorldMapEditorFactory_068578e0;
  Sexy::LazySingleton<WorldMapEditorFactory>::~LazySingleton
            ((LazySingleton<WorldMapEditorFactory> *)this);
  return;
}


/* WorldMapEditorFactory::~WorldMapEditorFactory() */

void __thiscall WorldMapEditorFactory::~WorldMapEditorFactory(WorldMapEditorFactory *this)

{
  ~WorldMapEditorFactory(this);
  AK::FreeHook(this);
  return;
}

