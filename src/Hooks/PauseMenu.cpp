#include "Hooks.hpp"
#include "GlobalNamespace/PauseMenuManager.hpp"
#include "GlobalNamespace/LevelBar.hpp"
#include "MainConfig.hpp"
#include "main.hpp"
#include "GlobalNamespace/PlayerData.hpp"
using namespace GlobalNamespace;
MAKE_AUTO_HOOK_MATCH(PauseMenu, &PauseMenuManager::ShowMenu, void, PauseMenuManager *self)
{
  PauseMenu(self);
  PlayerData *data;
  StringW username = data->playerName;
  UnityEngine::UI::Button *cButton = self->continueButton;
  UnityEngine::GameObject *gameObject = cButton->get_gameObject();
  HMUI::CurvedTextMeshPro *continueText = gameObject->GetComponentInChildren<HMUI::CurvedTextMeshPro *>();
  if (getMainConfig().EnablePMenuTweaks.GetValue())
  {
    self->levelBar->authorNameText->get_gameObject()->SetActive(false);
    self->levelBar->difficultyText->get_gameObject()->SetActive(false);
    self->levelBar->songNameText->set_fontSizeMax(1000);
    self->levelBar->songNameText->set_fontSize(500);
    self->levelBar->songNameText->set_color(getMainConfig().PMenuColour.GetValue());
    continueText->SetText("BALLS");
  }
}