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
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0x6cbd6258, "xenbus_unregister_driver" },
	{ 0x77a37c5a, "__xenbus_register_frontend" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x34f3b6, "xen_has_pv_nic_devices" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x2652b43c, "netdev_update_features" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x8c94b9fc, "netdev_notify_peers" },
	{ 0xd0458ccb, "xenbus_strstate" },
	{ 0x648b0c35, "xenbus_frontend_closed" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x72308942, "xenbus_free_evtchn" },
	{ 0x37914025, "xenbus_write" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0xc7c23ff0, "xenbus_exists" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0xe41534ce, "bind_evtchn_to_irqhandler" },
	{ 0x1dfddc0c, "xenbus_alloc_evtchn" },
	{ 0x4734b6ab, "xenbus_grant_ring" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xecd8f23d, "xenbus_read" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x4b7a9f7d, "netif_set_real_num_tx_queues" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xd27f215d, "gnttab_alloc_grant_references" },
	{ 0x9f984513, "strrchr" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x28318305, "snprintf" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x7b0cf8c, "xenbus_printf" },
	{ 0x38a7735c, "netdev_info" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x683b7960, "skb_checksum_setup" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0x4b931968, "xen_features" },
	{ 0x77201499, "skb_add_rx_frag" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xa816dfec, "skb_copy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xa02e3695, "netif_skb_features" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x27e1a049, "printk" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x8c484409, "gnttab_release_grant_reference" },
	{ 0x5391f2c7, "gnttab_end_foreign_access_ref" },
	{ 0x80c11314, "gnttab_query_foreign_access" },
	{ 0x37a0cba, "kfree" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x93d1d424, "gnttab_free_grant_references" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x3bfae68b, "__dev_kfree_skb_irq" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x696fa89e, "napi_disable" },
	{ 0xcaff94e5, "netif_tx_stop_all_queues" },
	{ 0x97d20533, "gnttab_foreach_grant_in_range" },
	{ 0x183a470e, "__skb_get_hash" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x89d5475b, "xenbus_dev_fatal" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd72feba2, "xenbus_read_driver_state" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2af30a80, "xenbus_switch_state" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0xbd671048, "__alloc_percpu_gfp" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc6cbbc89, "capable" },
	{ 0x91715312, "sprintf" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xf27d0a7b, "gnttab_grant_foreign_access_ref" },
	{ 0x31dca4d8, "gnttab_claim_grant_reference" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AF478ACE0B25969EA69F9C8");
MODULE_INFO(rhelversion, "8.0");
