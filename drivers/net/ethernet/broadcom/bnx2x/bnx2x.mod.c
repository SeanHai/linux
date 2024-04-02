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
	{ 0x38a7735c, "netdev_info" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x9efab5ee, "ethtool_op_get_ts_info" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xe548f5fe, "skb_clone_tx_timestamp" },
	{ 0xf1361941, "pci_vpd_find_tag" },
	{ 0xdf7e4b04, "pci_enable_sriov" },
	{ 0x1feeee40, "dcbnl_cee_notify" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x349cba85, "strchr" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x1fe912f1, "netdev_alloc_frag" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x1c6ec503, "__napi_schedule_irqoff" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x9b79a4f0, "napi_hash_del" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xb2e50c4f, "netdev_set_num_tc" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd2b2f577, "tcp_gro_complete" },
	{ 0xd48c7500, "pci_disable_sriov" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x25170ad2, "down_interruptible" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xdaceb7a6, "mdio_mii_ioctl" },
	{ 0x7e5ad7b2, "pcie_print_link_status" },
	{ 0xe9b75d22, "call_netdevice_notifiers" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xf8a1a016, "netdev_reset_tc" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0xb15b4109, "crc32c" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x630630ad, "ptp_clock_unregister" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x1cc30c3e, "netdev_set_tc_queue" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xb621d8c9, "netif_schedule_queue" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x2f3271dc, "dcb_setapp" },
	{ 0xdba47dbc, "pci_enable_pcie_error_reporting" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xc050234d, "dev_addr_del" },
	{ 0x14e4112, "down_trylock" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x5a921311, "strncmp" },
	{ 0x85a49dc7, "pci_vpd_find_info_keyword" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xdfe3440, "pci_get_domain_bus_and_slot" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa622d224, "dev_close" },
	{ 0x3dc1e6f6, "netdev_printk" },
	{ 0x8285e6da, "pci_wait_for_pending_transaction" },
	{ 0x6626afca, "down" },
	{ 0x6fc35b59, "netif_set_real_num_rx_queues" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x4b7a9f7d, "netif_set_real_num_tx_queues" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xb8c8d6d0, "ptp_clock_register" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0xe98d105f, "build_skb" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xb8212341, "timecounter_cyc2time" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0xe6478472, "_dev_info" },
	{ 0x10ce32a8, "dev_addr_add" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0x21f51fb1, "pci_enable_msix_range" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x709bd92f, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x92c878b0, "pci_intx" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8c69e82c, "pci_ioremap_bar" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x78c6770, "pci_disable_pcie_error_reporting" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xf7b182b1, "ptp_clock_index" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0x4d0723e6, "pci_num_vf" },
	{ 0xedc03953, "iounmap" },
	{ 0xcf2a6966, "up" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xfee98533, "skb_gso_validate_mac_len" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d247875, "pci_vfs_assigned" },
	{ 0x28318305, "snprintf" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x509f625d, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8ee1b4e5, "__napi_alloc_skb" },
	{ 0x433ee4cd, "skb_tstamp_tx" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x7d34246b, "pci_wake_from_d3" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xc9004247, "pci_read_vpd" },
	{ 0x3379d764, "down_timeout" },
	{ 0xa063d0db, "pci_find_ext_capability" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x2a6bb061, "__put_page" },
	{ 0xf6e09477, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf1e63929, "devmap_managed_key" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mdio,libcrc32c";

MODULE_ALIAS("pci:v000014E4d0000164Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001650sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001662sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001663sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000168Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000168Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000168Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d000016A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d000016A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d000016ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C710BFB3DA5057D05CFEC23");
MODULE_INFO(rhelversion, "8.0");
