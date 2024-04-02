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
	{ 0x2d3385d3, "system_wq" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x358661b3, "netdev_walk_all_lower_dev" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5b0b522e, "arp_tbl" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xa99b39c2, "prandom_bytes" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x821aac91, "neigh_destroy" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xaf737be8, "__neigh_create" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x8df939f1, "__neigh_event_send" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xad645234, "register_switchdev_notifier" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x11089ac7, "_ctype" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6d294e43, "clock_t_to_jiffies" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfc3bba0f, "unregister_fib_notifier" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x4fe1eddf, "unregister_netevent_notifier" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5b53595c, "fib4_rule_default" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4ad3b98b, "free_fib_info" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xe6478472, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x21f51fb1, "pci_enable_msix_range" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xe2b3207a, "unregister_switchdev_notifier" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x121da905, "queue_work_on" },
	{ 0x509f625d, "consume_skb" },
	{ 0x6cff3b90, "register_fib_notifier" },
	{ 0x4761f17c, "register_netevent_notifier" },
	{ 0xa3e9bfd6, "call_switchdev_notifiers" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x3c65ef43, "pci_msix_vec_count" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001B36d00000006sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BB9753615E24F5D11BDD23C");
MODULE_INFO(rhelversion, "8.0");
