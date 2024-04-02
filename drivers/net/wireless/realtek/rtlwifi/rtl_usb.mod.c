#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xc91d7b5e, "rtl_deinit_deferred_work" },
	{ 0x9d83146a, "rtl_deinit_core" },
	{ 0xd77fdbd5, "usb_get_from_anchor" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x151d7955, "ieee80211_unregister_hw" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xdc2ac18b, "usb_unanchor_urb" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x194811f6, "ieee80211_alloc_hw_nm" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xd85c1b05, "rtl_init_core" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x7a00e753, "rtl_action_proc" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb35eeaa3, "rtl_lps_change_work_callback" },
	{ 0x1bb4f73a, "rtl_init_rx_config" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0x9a68601e, "ieee80211_tx_status_irqsafe" },
	{ 0x615cfd8, "rtl_ops" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xba221020, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x275d5ec2, "ieee80211_free_hw" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x29361773, "complete" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xa515515f, "rtl_beacon_statistic" },
	{ 0x482f8924, "usb_anchor_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,rtlwifi";


MODULE_INFO(srcversion, "3C1A7F672BAE13FD701B28C");
MODULE_INFO(rhelversion, "8.0");
