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
	{ 0x60443957, "mdio45_probe" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x9efab5ee, "ethtool_op_get_ts_info" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0x51bd3af4, "dcb_ieee_setapp" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xe548f5fe, "skb_clone_tx_timestamp" },
	{ 0xdf7e4b04, "pci_enable_sriov" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xa9fa2aec, "dcb_ieee_delapp" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0xb3441ac7, "pci_sriov_set_totalvfs" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xa41beb0, "napi_consume_skb" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x1c6ec503, "__napi_schedule_irqoff" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xf6375585, "dev_uc_add" },
	{ 0x9b79a4f0, "napi_hash_del" },
	{ 0xe068f686, "xdp_rxq_info_reg" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xb2e50c4f, "netdev_set_num_tc" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd48c7500, "pci_disable_sriov" },
	{ 0xe94f64e1, "__hw_addr_sync_dev" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xe138ab3f, "pci_dev_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xdaceb7a6, "mdio_mii_ioctl" },
	{ 0x87b8798d, "sg_next" },
	{ 0xee8b874e, "xdp_rxq_info_unreg" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x7e5ad7b2, "pcie_print_link_status" },
	{ 0xe9b75d22, "call_netdevice_notifiers" },
	{ 0xe30d174f, "driver_for_each_device" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x999e8297, "vfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xf8a1a016, "netdev_reset_tc" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xef2104a, "netdev_bind_sb_channel_queue" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x559b27f8, "xdp_do_flush_map" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0xb34cb469, "ipv6_find_hdr" },
	{ 0x91715312, "sprintf" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x4790fce4, "__page_frag_cache_drain" },
	{ 0x2a2c4ae4, "__alloc_pages_nodemask" },
	{ 0xf4d591aa, "netdev_walk_all_upper_dev_rcu" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xdde6026a, "netdev_unbind_sb_channel" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0xb34c72cd, "xdp_return_frame_rx_napi" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x630630ad, "ptp_clock_unregister" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x1cc30c3e, "netdev_set_tc_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x89957467, "dca3_get_tag" },
	{ 0xb621d8c9, "netif_schedule_queue" },
	{ 0xade87869, "ptp_clock_event" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xc69c9a1f, "devm_hwmon_device_register_with_groups" },
	{ 0xb3d7d842, "dcb_getapp" },
	{ 0xdba47dbc, "pci_enable_pcie_error_reporting" },
	{ 0xac34ecec, "dca_register_notify" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x834e9e2b, "netdev_set_sb_channel" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xcaff94e5, "netif_tx_stop_all_queues" },
	{ 0x1a33ab9, "dca_unregister_notify" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc050234d, "dev_addr_del" },
	{ 0x51f66e03, "netif_set_xps_queue" },
	{ 0x27e1a049, "printk" },
	{ 0xa04be53a, "eth_platform_get_mac_address" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xcd279169, "nla_find" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x49f2dc54, "pcie_flr" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6fc35b59, "netif_set_real_num_rx_queues" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x4b7a9f7d, "netif_set_real_num_tx_queues" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x6466de1e, "dcb_ieee_getapp_mask" },
	{ 0xb8c8d6d0, "ptp_clock_register" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x7aa487f0, "xdp_return_frame" },
	{ 0xc5672213, "dca_add_requester" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9a910d01, "simple_open" },
	{ 0x183a470e, "__skb_get_hash" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0xe98d105f, "build_skb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe0a4e6ce, "eth_get_headlen" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe68fed60, "pci_select_bars" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xb8212341, "timecounter_cyc2time" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0xe6478472, "_dev_info" },
	{ 0x6cfa9591, "__hw_addr_unsync_dev" },
	{ 0x10ce32a8, "dev_addr_add" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0x21f51fb1, "pci_enable_msix_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x709bd92f, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9644e087, "skb_checksum_help" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x9b11153b, "ndo_dflt_fdb_add" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xd5ba4c83, "xdp_rxq_info_reg_mem_model" },
	{ 0xcd8dd495, "dma_pool_alloc" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x8e449188, "netdev_features_change" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x78c6770, "pci_disable_pcie_error_reporting" },
	{ 0x317e3194, "tcf_block_cb_unregister" },
	{ 0x2e3f9a5f, "xdp_do_redirect" },
	{ 0x37a0cba, "kfree" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x67d084fd, "___pskb_trim" },
	{ 0xf7b182b1, "ptp_clock_index" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0x8dc974cb, "dev_trans_start" },
	{ 0x77201499, "skb_add_rx_frag" },
	{ 0x4d0723e6, "pci_num_vf" },
	{ 0xedc03953, "iounmap" },
	{ 0xf1eb5306, "pci_prepare_to_sleep" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x3e036c58, "xdp_convert_zc_to_xdp_frame" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x8a43b6a3, "ndo_dflt_bridge_getlink" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x55f5019b, "__kmalloc_node" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d247875, "pci_vfs_assigned" },
	{ 0x28318305, "snprintf" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x509f625d, "consume_skb" },
	{ 0x4883ab32, "dca_remove_requester" },
	{ 0x6548e55e, "pci_enable_device_mem" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8ee1b4e5, "__napi_alloc_skb" },
	{ 0x433ee4cd, "skb_tstamp_tx" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7d34246b, "pci_wake_from_d3" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x48132457, "pci_release_selected_regions" },
	{ 0x2ca6809b, "pci_request_selected_regions" },
	{ 0x263074f8, "irq_set_affinity_hint" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x432fe2e1, "dma_pool_create" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0xdd5fc59d, "bpf_prog_put" },
	{ 0xa063d0db, "pci_find_ext_capability" },
	{ 0x23fd3028, "vmalloc_node" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x2b2c7479, "tcf_block_cb_register" },
	{ 0xeb9faa8b, "__skb_pad" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
	{ 0xf6e09477, "pcie_capability_read_word" },
	{ 0x97183961, "dev_get_stats" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0xdc34a927, "__tracepoint_xdp_exception" },
	{ 0x6c9ff8a8, "netdev_crit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mdio,dca";

MODULE_ALIAS("pci:v00008086d000010B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010ECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001508sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001517sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001507sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001514sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000152Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001529sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000151Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001528sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001558sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001557sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001560sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001563sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000015E5sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4A5464EBA14AF833997BAE4");
MODULE_INFO(rhelversion, "8.0");
