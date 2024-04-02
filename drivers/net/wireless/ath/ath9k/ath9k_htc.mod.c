#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0x984cfaf7, "ieee80211_rx_napi" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd8a67e76, "ath9k_hw_set_txq_props" },
	{ 0xf09f2816, "ieee80211_csa_finish" },
	{ 0x5b4d769d, "ath9k_hw_init" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x7de77a20, "ath9k_cmn_get_channel" },
	{ 0x28945c1d, "ath9k_hw_deinit" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x89e66458, "device_release_driver" },
	{ 0x4856104, "ath9k_hw_set_gpio" },
	{ 0x28b5c56d, "ath9k_cmn_init_crypto" },
	{ 0xac1ba2cd, "ieee80211_queue_work" },
	{ 0xe99d3175, "ath9k_cmn_process_rate" },
	{ 0xd6b51be6, "ieee80211_csa_is_complete" },
	{ 0x70790ce2, "ath9k_hw_btcoex_enable" },
	{ 0x607780a2, "ath9k_hw_wait" },
	{ 0x180b2051, "ath9k_cmn_get_hw_crypto_keytype" },
	{ 0x93ba55f4, "ath9k_hw_stopdmarecv" },
	{ 0x87ab4b41, "ath_key_delete" },
	{ 0xec393d45, "ath9k_cmn_update_txpow" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x6b486a75, "ieee80211_beacon_get_tim" },
	{ 0xefb594d0, "ath9k_hw_gpio_get" },
	{ 0xb8cb7fc9, "ath_regd_init" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x151d7955, "ieee80211_unregister_hw" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xaa7edd56, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3b75ab94, "ath9k_hw_setrxfilter" },
	{ 0xf8b4ca7f, "ath9k_hw_get_txq_props" },
	{ 0xb6c06f3d, "ath9k_hw_releasetxqueue" },
	{ 0x65a29a23, "ath9k_hw_reset_tsf" },
	{ 0xbf420674, "wiphy_rfkill_start_polling" },
	{ 0x2a034576, "ath9k_cmn_reload_chainmask" },
	{ 0x91715312, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x22963096, "ath9k_cmn_init_channels_rates" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xf1866b92, "ieee80211_stop_queues" },
	{ 0xdc2ac18b, "usb_unanchor_urb" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0xfd94814e, "complete_all" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x3de3e18d, "ieee80211_tx_status" },
	{ 0x15cfc1b0, "ath_printk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x35d3af3f, "ath9k_hw_setopmode" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf867ebdb, "ath9k_hw_disable" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x4ccc2286, "ath9k_hw_resettxqueue" },
	{ 0x8f362e2c, "ath9k_hw_gettsf64" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x194811f6, "ieee80211_alloc_hw_nm" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x18e45181, "ath9k_hw_set_sta_beacon_timers" },
	{ 0xb85ddcb7, "ath9k_hw_set_tsfadjust" },
	{ 0x48a0e397, "ath9k_cmn_beacon_config_ap" },
	{ 0xd4cf92da, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xbcd3f0da, "ath9k_hw_btcoex_disable" },
	{ 0xb2f054ef, "ath9k_hw_getrxfilter" },
	{ 0x3a3ca08e, "ath9k_hw_ani_monitor" },
	{ 0x63ee974e, "ath_is_mybeacon" },
	{ 0x8fa20d5, "ath9k_cmn_beacon_config_adhoc" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x4a42ab0d, "ath9k_cmn_process_rssi" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x5ee2df37, "wiphy_rfkill_stop_polling" },
	{ 0x6e7e75f4, "request_firmware_nowait" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x198a8057, "ath9k_hw_write_associd" },
	{ 0xb5a7cb11, "ieee80211_queue_delayed_work" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xd9d9f4a4, "ath_reg_notifier_apply" },
	{ 0xfe9a6ccc, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xaf6e7746, "ath9k_hw_init_btcoex_hw" },
	{ 0x56754ef4, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x804fcdd1, "ath9k_hw_beaconq_setup" },
	{ 0xe6478472, "_dev_info" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x7d3727cd, "ath9k_hw_name" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x615e7544, "ath9k_hw_init_global_settings" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x7ac0478b, "ath9k_hw_settsf64" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd252a816, "wiphy_rfkill_set_hw_state" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x5047398c, "ath9k_hw_beaconinit" },
	{ 0x70144638, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xde54bc3f, "ieee80211_get_buffered_bc" },
	{ 0xb04c82e9, "usb_interrupt_msg" },
	{ 0x29a21fe0, "ath9k_hw_gpio_free" },
	{ 0xf102e75a, "ath9k_hw_btcoex_bt_stomp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x99ad87d7, "ath9k_hw_setrxabort" },
	{ 0xe2e33547, "ath9k_cmn_beacon_config_sta" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb127e703, "ath_hw_setbssidmask" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3032c7f3, "ath9k_cmn_rx_skb_postprocess" },
	{ 0x9e5a7a7b, "ath9k_hw_phy_disable" },
	{ 0xb45d962b, "__ieee80211_get_radio_led_name" },
	{ 0x10aedc69, "ieee80211_get_hdrlen_from_skb" },
	{ 0x509cab5c, "ath9k_hw_setpower" },
	{ 0x49462428, "__ieee80211_create_tpt_led_trigger" },
	{ 0xba221020, "ieee80211_register_hw" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x68202713, "ath9k_hw_btcoex_set_weight" },
	{ 0x37a0cba, "kfree" },
	{ 0x40c8dc6, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc9a8b53f, "ath9k_hw_setmcastfilter" },
	{ 0xa9634f3, "ieee80211_start_tx_ba_session" },
	{ 0x3906016f, "ath9k_hw_gpio_request_out" },
	{ 0x61bd69e9, "ath9k_hw_startpcureceive" },
	{ 0xd768a2f4, "ath9k_hw_setuptxqueue" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x7194de10, "ath9k_hw_reset" },
	{ 0x275d5ec2, "ieee80211_free_hw" },
	{ 0x330180f0, "ath9k_cmn_rx_accept" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x5c33571d, "ath9k_hw_btcoex_init_3wire" },
	{ 0xba380d84, "ath_key_config" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xc4f88d1a, "ath9k_hw_reset_calvalid" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x69e1549c, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x482f8924, "usb_anchor_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ath9k_hw,ath9k_common,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D550411629101B820A36C71");
MODULE_INFO(rhelversion, "8.0");
