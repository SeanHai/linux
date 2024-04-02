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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xfc81423, "generic_file_llseek" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x754d539c, "strlen" },
	{ 0x97868aef, "__kfifo_alloc" },
	{ 0xac1ba2cd, "ieee80211_queue_work" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xe47ec440, "ieee80211_rts_get" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x6b486a75, "ieee80211_beacon_get_tim" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x151d7955, "ieee80211_unregister_hw" },
	{ 0xe8663ae6, "ieee80211_channel_to_frequency" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x59ddc0f9, "led_classdev_resume" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xaa7edd56, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xbf420674, "wiphy_rfkill_start_polling" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xf1866b92, "ieee80211_stop_queues" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x848be64a, "ieee80211_stop_queue" },
	{ 0x3de3e18d, "ieee80211_tx_status" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xff9ef847, "debugfs_create_u32" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x2105444b, "default_llseek" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xd28f24f9, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x19635cb8, "ieee80211_ctstoself_get" },
	{ 0x5ee2df37, "wiphy_rfkill_stop_polling" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb5a7cb11, "ieee80211_queue_delayed_work" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xe6478472, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd252a816, "wiphy_rfkill_set_hw_state" },
	{ 0x1000e51, "schedule" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xde54bc3f, "ieee80211_get_buffered_bc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x80deca47, "ieee80211_wake_queue" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x10aedc69, "ieee80211_get_hdrlen_from_skb" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xba221020, "ieee80211_register_hw" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x87591a94, "debugfs_create_blob" },
	{ 0x2534026f, "ieee80211_tx_status_ext" },
	{ 0x3ead91cf, "led_classdev_suspend" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x509f625d, "consume_skb" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x6bd016b5, "ieee80211_iterate_interfaces" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x85075cb1, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";


MODULE_INFO(srcversion, "569B67CC40B9F8B1D6B3936");
MODULE_INFO(rhelversion, "8.0");
