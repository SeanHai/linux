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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xaad0ae78, "__bitmap_shift_right" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x89e66458, "device_release_driver" },
	{ 0xac1ba2cd, "ieee80211_queue_work" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd77fdbd5, "usb_get_from_anchor" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x6b486a75, "ieee80211_beacon_get_tim" },
	{ 0xb8cb7fc9, "ath_regd_init" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x151d7955, "ieee80211_unregister_hw" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xdecb82ce, "__ieee80211_get_assoc_led_name" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xf1866b92, "ieee80211_stop_queues" },
	{ 0xdc2ac18b, "usb_unanchor_urb" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x848be64a, "ieee80211_stop_queue" },
	{ 0xfe7843b, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xfb578fc5, "memset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x194811f6, "ieee80211_alloc_hw_nm" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xd28f24f9, "ieee80211_free_txskb" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd4cf92da, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x63ee974e, "ath_is_mybeacon" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd4c7656d, "input_set_capability" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x3bfae68b, "__dev_kfree_skb_irq" },
	{ 0xdc6d1b49, "ieee80211_sta_block_awake" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x6e7e75f4, "request_firmware_nowait" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb5a7cb11, "ieee80211_queue_delayed_work" },
	{ 0xd9d9f4a4, "ath_reg_notifier_apply" },
	{ 0xfe9a6ccc, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x56754ef4, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x55e5dd81, "usb_queue_reset_device" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xe6478472, "_dev_info" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xf83f59a1, "ath_regd_get_band_ctl" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0xa916b694, "strnlen" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3b658c37, "usb_reset_device" },
	{ 0xf789deff, "input_register_device" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0x9a68601e, "ieee80211_tx_status_irqsafe" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0xcfeb9b95, "ieee80211_get_tx_rates" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x70144638, "ieee80211_find_sta" },
	{ 0x4c29444e, "__ieee80211_get_tx_led_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x842f046d, "usb_poison_anchored_urbs" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x80deca47, "ieee80211_wake_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7b06b0d, "ieee80211_restart_hw" },
	{ 0xba221020, "ieee80211_register_hw" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x40c8dc6, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x275d5ec2, "ieee80211_free_hw" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x86b13d2a, "usb_unpoison_anchored_urbs" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x69e1549c, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x482f8924, "usb_anchor_urb" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xf742168e, "ieee80211_stop_tx_ba_session" },
	{ 0xcb52e4f2, "ieee80211_queue_stopped" },
	{ 0xd55379f7, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vCACEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0804d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0326d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3417d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p5304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0249d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p02B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p9170d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2315B4477D5D75A6DCE046D");
MODULE_INFO(rhelversion, "8.0");
