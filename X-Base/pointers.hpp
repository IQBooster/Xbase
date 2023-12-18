#pragma once
#include "pch.h"
#include "Array.hpp"
#include "Classes.hpp"
#include "datatypes.hpp"
#include "Invoker.hpp"
#include "Bitbuffer.hpp"

typedef bool(*fpRunScriptThread)(uint32_t ops_to_execute);
typedef bool(*fpIsDlcPresent)(Hash dlchash);
typedef bool(*fpDoesCamExist)(Cam cam);
typedef int(*fpGetNumberOfEvents)(int unk);
typedef bool(*fpGetCurrentPedWeapon)(Ped ped, DWORD* hash, bool unk);
typedef void*(*fpSetThisScriptIsNetworkScript)();
typedef void(*fpTriggerScriptEvent)(int unk, uint64_t* args, int size, int bit);
typedef Hash*(*fpFileRegister)(int* textureID, const char* texturePath, bool unk3, const char* unk4, bool unk5);
typedef const char*(*fpGetLabelText)(void* thisptr, const char* label);
typedef long long(*fpWndproc)(HWND hwnd, UINT msg, WPARAM wP, LPARAM lP);
typedef char*(*fpGetPlayerName)(Player p);
typedef void*(*fpWinapiCheck)();
typedef Cam(*fpCreateCam)(char* camName, BOOL p1);
typedef void(*fpSetCamCoord)(Cam cam, float x, float y, float z);
typedef void(*fpSetCamRot)(Cam, float x, float y, float z, int rotationOrder);
typedef bool(*fpSendNetInfoToSession)(__int64 localPlayer, __int64 a2, __int64 a3, DWORD* a4);
typedef bool(*fpReturnFalse)();
typedef UINT64(*fpEntityPosition)(UINT64 address, float *position);
typedef UINT64(*fpEntityModel1)(UINT64 address);
typedef UINT64(*fpEntityModel2)(UINT64 address);
typedef int(*fpAddEntityToPool)(UINT64 address);
typedef Object(*fpCreateObject)(Object modelHash, float x, float y, float z, BOOL isNetwork, BOOL thisScriptCheck, BOOL dynamic);
typedef Vehicle(*fpCreateVehicle)(Hash model, Vector3 pos, float heading, BOOL networked, BOOL unk2);
typedef bool(*fpCreateAmbientPickup)(DWORD pickupHash, Vector3 pos, int unk0, int value, DWORD modelHash, bool unk1, bool unk2);
typedef void(*fpSetMobileRadioEnabledDuringGameplay)(bool toggle);
typedef void(*fpClearPedTasksImmediately)(Ped ped);
typedef void(*fpSetSessionWeather)(int eventGroup, int weatherID, int a3, CNetGamePlayer* alwaysZero);
typedef void(*fpAddOwnedExplosion)(Ped ped, Vector3 pos, int type, float dmgScale, bool isAudible, bool isInvis, float fCamShake);
typedef int64_t(*fpRidWriter)(int64_t rcx, int64_t rdx);
typedef int(*fpCensorChatText)(__int64 chatMenu, const char* userText, const char** outputText);
typedef void(*fpPlayerJoinHandler)(__int64 unk, __int64 player);
typedef bool(*fpReadDword)(void* this_, DWORD* dword, int bit);
typedef bool(*fpReadWord)(void* this_, WORD* word, int bit);
typedef void(*fpSetVectorResults)(scrNativeCallContext* ctx);
typedef bool(*fpIsPlayerDead)(Player player);
typedef void(*fpSetMaxWantedLevel)(int maxWantedLevel);
typedef void(*fpNetworkHandleFromPlayer)(Player player, int* handle, int bufferSize);
typedef bool(*fpNetworkIsHandleValid)(int* handle, int bufferSize);
typedef bool(*fpGetWaypointPosition)(Vector2* pos);
typedef Ped(*fpPlayerPedId)();
typedef void(*fpSetCamParams)(Cam cam, float cx, float cy, float cz, float rx, float ry, float rz, float fov, Any p8, int p9, int p10, int p11);
typedef void(*fpSetCamFov)(Cam cam, float fov);
typedef void(*fpSetCamFarClip)(Cam cam, float farclip);
typedef Cam(*fpCreateCamera)(Hash hash, BOOL p1);
typedef void(*fpDestroyCam)(Cam cam, BOOL netMissionEntity);
typedef void(*fpDestroyAllCams)(BOOL netMissionEntity);
typedef bool(*fpIsCamActive)(Cam cam);
typedef Vector3(*fpGetCamCoord)(Cam cam);
typedef Vector3(*fpGetCamRot)(Cam cam, int rotationOrder);
typedef __int64(*fpGetModelInfo)(unsigned int model, DWORD* out);
typedef bool(*fpTriggerScriptCrcCheckOnPlayer)(Player p, int always6, Hash script);
typedef void(*fpSetVehicleEngineOn)(Vehicle vehicle, BOOL value, BOOL instantly, BOOL otherwise);
typedef Vector3(*fpGetGameplayCamRot)(Vector3 out, uint32_t unk1);
typedef Vector3(*fpGetGameplayCamCoord)(Vector3 out);
typedef void(*fpGiveDelayedWeaponToPed)(Ped ped, Hash weapon, int ammo, bool equip);
typedef void(*fpRemoveAllPedWeapons)(Ped ped, bool unk);
typedef void(*fpRemoveWeaponFromPed)(Ped ped, Hash weapon);
typedef bool(*fpSetEntityCollision)(Entity entity, BOOL toggle, BOOL keepPhysics);
typedef bool(*fpIsAimCamActive)();
typedef void(*fpSetVehicleUndrivable)(Vehicle vehicle, BOOL toggle);
typedef bool(*fpSetVehicleDrivable)(Vehicle vehicle, BOOL p1);
typedef char*(*fpGetDisplayNameFromVehicle)(Hash modelHash);
typedef bool(*fpToggleVehicleMod)(Vehicle vehicle, int modType, BOOL toggle);
typedef void(*fpReceivedEvent)(__int64 thisptr, __int64 sender, __int64 receiver, unsigned __int16 eventId, int unk, int eventHash, __int64 bufferSize, __int64 bufferData);
typedef bool(*fpIsThisModelAPlane)(Hash model);
typedef bool(*fpIsThisModelAHeli)(Hash model);
typedef void(*fpDrawRect)(float x, float y, float width, float height, int r, int g, int b, int a);
typedef void(*fpDrawPoly)(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int red, int green, int blue, int alpha);
typedef void(*fpDrawSprite)(const char* textureDict, const char* textureName, float screenX, float screenY, float width, float height, float heading, int red, int green, int blue, int alpha);
typedef bool(*fpNetworkCanBail)();
typedef void(*fpDisableControlAction)(int padIndex, int control, bool disable);
typedef void(*fpSetCurrentPedWeapon)(Ped ped, Hash weapon, bool equipNow);
typedef void(*fpNetworkEventType6)(__int64 thisptr, datBitBuffer* buffer, __int64 sender, __int64 receiver);
typedef bool(*fpNetworkEventType7)(__int64 thisptr, __int64 sender, __int64 receiver);
typedef void(*fpSetWarningMessage2)(char* entryHeader, char* entryLine1, int instructionalKey, char* entryLine2, BOOL p4, Any p5, Any* p6, Any* p7, BOOL background);
typedef void(*fpGetChatData)(void* thisptr, __int64 a2, __int64 a3, char *message, BOOL team);
typedef CNetGamePlayer*(*fpGetChatSender)(__int64 a1, __int64 a2, __int64 a3);
typedef bool(*fpSetModelAsNoLongerNeeded)(Hash hash);
typedef bool(*fpRequestModel)(Hash hash);
typedef bool(*fpHasModelLoaded)(Hash hash);
typedef bool(*fpIsModelValid)(Hash hash);
typedef bool(*fpNetworkSetInSpectatorMode)(bool toggle, Ped ped);
typedef bool(*fpIsFriend)(int* networkHandle);
typedef uint64_t(*fpGetEventAtIndex)(uint64_t eventGroup, uint64_t eventIndex);
typedef int(*fpPointerToHandle)(void* pointer);
typedef void*(*fpHandleToPointer)(int handle);

class pointers {

public:
	explicit pointers();
	~pointers();

	fpRunScriptThread run_script_thread{};
	fpIsDlcPresent is_dlc_present{};
	fpDoesCamExist does_cam_exist{};
	fpGetNumberOfEvents get_number_of_events{};
	fpGetCurrentPedWeapon get_current_ped_weapon{};
	fpIsPlayerDead is_player_dead{};
	fpNetworkEventType7 scripted_game_event{};
	fpWinapiCheck winapi_check{};
	fpSetWarningMessage2 set_warning_message_2{};
	fpGetPlayerName get_player_name{};
	fpSetThisScriptIsNetworkScript get_networked_script_handler{};
	fpSetThisScriptIsNetworkScript get_script_handler{};
	fpGetLabelText get_label_text{};
	fpTriggerScriptEvent trigger_script_event{};
	fpFileRegister file_register{};
	fpWndproc m_wndproc{};
	fpSendNetInfoToSession send_net_info_to_session{};
	fpCreateCam create_cam{};
	fpSetCamCoord set_cam_coord{};
	fpSetCamRot set_cam_rot{};
	fpReturnFalse return_false{};
	fpCensorChatText censor_chat_text{};
	fpEntityPosition entity_position{};
	fpEntityModel1 entity_model_1{};
	fpEntityModel2 entity_model_2{};
	fpPlayerJoinHandler player_join_handler{};
	fpRidWriter rid_writer{};
	fpCreateObject create_object{};
	fpCreateVehicle create_vehicle{};
	fpClearPedTasksImmediately clear_ped_tasks_immediately{};
	fpAddOwnedExplosion add_owned_explosion{};
	fpSetSessionWeather set_session_weather{};
	fpSetMobileRadioEnabledDuringGameplay set_mobile_radio_enabled_during_gameplay{};
	fpAddEntityToPool add_entity_to_pool{};
	fpCreateAmbientPickup create_ambient_pickup{};
	fpReadDword read_bitbuffer_dword{};
	fpReadWord read_bitbuffer_word{};
	fpSetVectorResults set_vector_results{};
	fpSetMaxWantedLevel set_max_wanted_level{};
	fpNetworkHandleFromPlayer network_handle_from_player{};
	fpNetworkIsHandleValid network_is_handle_valid{};
	fpGetWaypointPosition get_waypoint_position{};
	fpPlayerPedId player_ped_id{};
	fpSetCamParams set_cam_params{};
	fpSetCamFov set_cam_fov{};
	fpSetCamFarClip set_cam_far_clip{};
	fpCreateCamera create_camera{};
	fpDestroyCam destroy_cam{};
	fpDestroyAllCams destroy_all_cams{};
	fpIsCamActive is_cam_active{};
	fpGetCamCoord get_cam_coord{};
	fpGetCamRot get_cam_rot{};
	fpTriggerScriptCrcCheckOnPlayer trigger_script_crc_check_on_player{};
	fpGetModelInfo get_model_info{};
	fpSetVehicleEngineOn set_vehicle_engine_on{};
	fpGetGameplayCamRot get_gameplay_cam_rot{};
	fpGetGameplayCamCoord get_gameplay_cam_coord{};
	fpGiveDelayedWeaponToPed give_delayed_weapon_to_ped{};
	fpRemoveWeaponFromPed remove_weapon_from_ped{};
	fpRemoveAllPedWeapons remove_all_ped_weapons{};
	fpIsAimCamActive is_aim_cam_active{};
	fpSetEntityCollision set_entity_collision{};
	fpDrawRect draw_rect{};
	fpDrawPoly draw_poly{};
	fpDrawSprite draw_sprite{};
	fpIsThisModelAPlane is_this_model_a_plane{};
	fpIsThisModelAHeli is_this_model_a_heli{};
	fpReceivedEvent received_event{};
	fpNetworkCanBail network_can_bail{};
	fpSetVehicleUndrivable set_vehicle_undrivable{};
	fpSetVehicleDrivable set_vehicle_drivable{};
	fpGetDisplayNameFromVehicle get_display_name_from_vehicle{};
	fpToggleVehicleMod toggle_vehicle_mod{};
	fpDisableControlAction disable_control_action{};
	fpSetCurrentPedWeapon set_current_ped_weapon{};
	fpGetChatData get_chat_data{};
	fpGetChatSender get_chat_sender{};
	fpSetModelAsNoLongerNeeded set_model_as_no_longer_needed{};
	fpRequestModel request_model{};
	fpHasModelLoaded has_model_loaded{};
	fpIsModelValid is_model_valid{};
	fpNetworkSetInSpectatorMode set_in_spectator_mode{};
	fpIsFriend is_friend{};
	fpGetEventAtIndex get_event_at_index{};
	fpHandleToPointer handle_to_pointer{};
	fpPointerToHandle pointer_to_handle{};

	NativeRegistrationNew** m_registrationTable{};
	IDXGISwapChain** swap_chain{};
	twoBytes* m_ownedExplosionBypass{};
	UINT64* _entityPoolAddress{};
	UINT64* _vehiclePoolAddress{};
	UINT64* _pedPoolAddress{};
	UINT64* _objectPoolAddress{};
	UINT64* _pickupObjectPoolAddress{};
	eGameState* m_gameState{};
	twentyfourBytes* model_check_ptr{};
	void* jmp_rbx{};
	void* jmp_rdi{};
	uint64_t** m_globalBase{};
	uint64_t* m_frame_count{};
	char* event_struct{};
	datArray<GtaThread*>* m_thread_list{};
	inline int get_frame_count() { return (int)*m_frame_count; }
};

inline std::unique_ptr<pointers> g_pointers;