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
	{ 0x317a8ad6, "flush_work" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x244642a2, "__kfree_skb" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xaf273372, "vlan_dev_vlan_id" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x9bb44688, "__vlan_find_dev_deep_rcu" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xa7204ef7, "netdev_master_upper_dev_get_rcu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xdaceb7a6, "mdio_mii_ioctl" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x821aac91, "neigh_destroy" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x91715312, "sprintf" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8df939f1, "__neigh_event_send" },
	{ 0xabd938ef, "netif_rx" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xcaff94e5, "netif_tx_stop_all_queues" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x4fe1eddf, "unregister_netevent_notifier" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x5df782d0, "arp_send" },
	{ 0x6fc35b59, "netif_set_real_num_rx_queues" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x4b7a9f7d, "netif_set_real_num_tx_queues" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xafbe9d9d, "pci_find_capability" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc5bc25de, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x21f51fb1, "pci_enable_msix_range" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x3e17f466, "mdio_set_flag" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3fa0d062, "kstrtou16" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0x37500af1, "hex2bin" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0x76a7c109, "dev_alert" },
	{ 0xedc03953, "iounmap" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xe0a07210, "napi_get_frags" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x509f625d, "consume_skb" },
	{ 0x2652b43c, "netdev_update_features" },
	{ 0x77bc13a0, "strim" },
	{ 0x4761f17c, "register_netevent_notifier" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xb0734f0, "pcie_capability_write_word" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2a6bb061, "__put_page" },
	{ 0xe88455d3, "napi_gro_frags" },
	{ 0xf6e09477, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0xf1e63929, "devmap_managed_key" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mdio";

MODULE_ALIAS("pci:v00001425d00000020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000022sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000025sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000026sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000031sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000035sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000036sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000037sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2A58071AB806F2B7D64A8EA");
MODULE_INFO(rhelversion, "8.0");
