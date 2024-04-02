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
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0x51bd3af4, "dcb_ieee_setapp" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xe548f5fe, "skb_clone_tx_timestamp" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x1c6ec503, "__napi_schedule_irqoff" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xe068f686, "xdp_rxq_info_reg" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd2b2f577, "tcp_gro_complete" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xee8b874e, "xdp_rxq_info_unreg" },
	{ 0xe9b75d22, "call_netdevice_notifiers" },
	{ 0xcf5138ca, "bpf_prog_add" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x29f9517f, "rps_may_expire_flow" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x91715312, "sprintf" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x630630ad, "ptp_clock_unregister" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xb621d8c9, "netif_schedule_queue" },
	{ 0xfb578fc5, "memset" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x9eeeef48, "qed_put_eth_ops" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6fc35b59, "netif_set_real_num_rx_queues" },
	{ 0x4b7a9f7d, "netif_set_real_num_tx_queues" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xb8c8d6d0, "ptp_clock_register" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x50c60211, "alloc_cpu_rmap" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x810be09, "free_irq_cpu_rmap" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0xe98d105f, "build_skb" },
	{ 0xb73195eb, "xdp_rxq_info_is_reg" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xb8212341, "timecounter_cyc2time" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0xe6478472, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8b5b25c8, "irq_cpu_rmap_add" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf7b182b1, "ptp_clock_index" },
	{ 0x4d0723e6, "pci_num_vf" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x509f625d, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x433ee4cd, "skb_tstamp_tx" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xdd5fc59d, "bpf_prog_put" },
	{ 0xf88c4930, "qed_get_eth_ops" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0xdc34a927, "__tracepoint_xdp_exception" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=qed";

MODULE_ALIAS("pci:v00001077d00001634sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001666sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001636sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001644sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001654sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001656sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001664sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00008070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00008090sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F37E6FCC54CED7D17EEE0DA");
MODULE_INFO(rhelversion, "8.0");
