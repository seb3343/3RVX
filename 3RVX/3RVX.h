#pragma once

#define CLASS_3RVX L"3RVXv3"

static const UINT WM_3RVX_CONTROL
    = RegisterWindowMessage(L"WM_3RVX_CONTROL");
static const UINT WM_3RVX_SETTINGSCTRL
    = RegisterWindowMessage(L"WM_3RVX_SETTINGSCTRL");

#define MSG_LOAD     WM_APP + 100
#define MSG_SETTINGS WM_APP + 101
#define MSG_EXIT     WM_APP + 102
#define MSG_HIDEOSD  WM_APP + 103

#define OSD_VOLUME 1
#define OSD_MUTE 2