// Class: JamListener


/* JamListener::JamListener() */

void __thiscall JamListener::JamListener(JamListener *this)

{
  Sexy::IInteractiveAudioCallbackListener::IInteractiveAudioCallbackListener
            ((IInteractiveAudioCallbackListener *)this);
  *(undefined ***)this = &PTR_nop_0690b6a0;
  return;
}


/* JamListener::OnMusicSyncBar(void*) */

void JamListener::OnMusicSyncBar(void *param_1)

{
  AudioMgr *this;
  
  this = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::AddDataToCallbackQueue(this,0x200);
  return;
}


/* JamListener::OnMusicSyncBeat(void*) */

void JamListener::OnMusicSyncBeat(void *param_1)

{
  AudioMgr *this;
  
  this = (AudioMgr *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::AddDataToCallbackQueue(this,0x100);
  return;
}

