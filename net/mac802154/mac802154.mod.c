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
	{ 0xa4a02131, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xb7e2662, "crypto_alloc_skcipher" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xeaa330ae, "ieee802154_hdr_push" },
	{ 0xf97d1a04, "hrtimer_cancel" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0x65a2afb5, "wpan_phy_new" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x93815ea5, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xfdc8c9b3, "bpf_trace_run3" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xc7b96247, "ieee802154_hdr_pull" },
	{ 0x73c5f5f5, "trace_define_field" },
	{ 0x9181e45, "hrtimer_start_range_ns" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x62621c7e, "bpf_trace_run1" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8a7b630, "trace_event_reg" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0x3d181dd7, "wpan_phy_free" },
	{ 0x5792f848, "strlcpy" },
	{ 0x9872f1, "ieee802154_hdr_peek" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x72fe6e03, "wpan_phy_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x5182a0ba, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xcc845b48, "crypto_aead_setkey" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x276a9385, "trace_event_ignore_this_pid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0x6717d4c9, "trace_event_buffer_commit" },
	{ 0x5a4ae3ac, "wpan_phy_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd98a205d, "ieee802154_hdr_peek_addrs" },
	{ 0xc15a44c6, "memzero_explicit" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x65522c9c, "unregister_netdevice_queue" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xc1cf2d34, "event_triggers_call" },
	{ 0xdbbe7391, "crypto_aead_setauthsize" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0xf618e297, "bpf_trace_run2" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37ba5691, "crypto_alloc_aead" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xb7d8c32f, "trace_event_raw_init" },
	{ 0x7c054228, "dev_alloc_name" },
	{ 0xdf243169, "hrtimer_init" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x7a4497db, "kzfree" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x4e8c3a62, "trace_raw_output_prep" },
	{ 0x121da905, "queue_work_on" },
	{ 0x11caddc7, "trace_seq_printf" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x6839a855, "bpf_trace_run4" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x87e2553b, "ieee802154_max_payload" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ieee802154";


MODULE_INFO(srcversion, "11B767FAB44D96CB59365E7");
MODULE_INFO(rhelversion, "8.0");
