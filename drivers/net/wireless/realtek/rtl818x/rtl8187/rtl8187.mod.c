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
	{ 0x906d60ea, "ieee80211_rts_duration" },
	{ 0x884deb9d, "eeprom_93cx6_read" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc1f30fe4, "ieee80211_rx_irqsafe" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x6b486a75, "ieee80211_beacon_get_tim" },
	{ 0x151d7955, "ieee80211_unregister_hw" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xbf420674, "wiphy_rfkill_start_polling" },
	{ 0x16e9a4fd, "skb_unlink" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xdc2ac18b, "usb_unanchor_urb" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x194811f6, "ieee80211_alloc_hw_nm" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x9166fada, "strncpy" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x3bfae68b, "__dev_kfree_skb_irq" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x5ee2df37, "wiphy_rfkill_stop_polling" },
	{ 0xb5a7cb11, "ieee80211_queue_delayed_work" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xe6478472, "_dev_info" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x5f19104c, "__ieee80211_get_rx_led_name" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3b658c37, "usb_reset_device" },
	{ 0xd252a816, "wiphy_rfkill_set_hw_state" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0x9a68601e, "ieee80211_tx_status_irqsafe" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x29a740dc, "flush_delayed_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4c29444e, "__ieee80211_get_tx_led_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x817d4c65, "ieee80211_generic_frame_duration" },
	{ 0xb45d962b, "__ieee80211_get_radio_led_name" },
	{ 0x3a433914, "ieee80211_ctstoself_duration" },
	{ 0xba221020, "ieee80211_register_hw" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x275d5ec2, "ieee80211_free_hw" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x482f8924, "usb_anchor_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xcb52e4f2, "ieee80211_queue_stopped" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,eeprom_93cx6,cfg80211";

MODULE_ALIAS("usb:v0B05p171Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp705Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8198d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p6100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p6A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0pCA02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p9401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D1pABE6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6232d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p8187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0073d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1FD1B389F61751556D63AE4");
MODULE_INFO(rhelversion, "8.0");
