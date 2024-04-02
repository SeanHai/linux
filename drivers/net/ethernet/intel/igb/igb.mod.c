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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0xc6572c74, "__pm_runtime_idle" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xe548f5fe, "skb_clone_tx_timestamp" },
	{ 0xdf7e4b04, "pci_enable_sriov" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x696fa89e, "napi_disable" },
	{ 0xb3441ac7, "pci_sriov_set_totalvfs" },
	{ 0xa41beb0, "napi_consume_skb" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xd48c7500, "pci_disable_sriov" },
	{ 0xe94f64e1, "__hw_addr_sync_dev" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xe30d174f, "driver_for_each_device" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0x999e8297, "vfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb34cb469, "ipv6_find_hdr" },
	{ 0x91715312, "sprintf" },
	{ 0x4790fce4, "__page_frag_cache_drain" },
	{ 0x2a2c4ae4, "__alloc_pages_nodemask" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x630630ad, "ptp_clock_unregister" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x89957467, "dca3_get_tag" },
	{ 0xb621d8c9, "netif_schedule_queue" },
	{ 0xade87869, "ptp_clock_event" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xc69c9a1f, "devm_hwmon_device_register_with_groups" },
	{ 0xdba47dbc, "pci_enable_pcie_error_reporting" },
	{ 0xac34ecec, "dca_register_notify" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xcaff94e5, "netif_tx_stop_all_queues" },
	{ 0x1a33ab9, "dca_unregister_notify" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xa04be53a, "eth_platform_get_mac_address" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x29928ef8, "pci_device_is_present" },
	{ 0x6fc35b59, "netif_set_real_num_rx_queues" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x4b7a9f7d, "netif_set_real_num_tx_queues" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xb8c8d6d0, "ptp_clock_register" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xc5672213, "dca_add_requester" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4ea5d10, "ksize" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0xe98d105f, "build_skb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe0a4e6ce, "eth_get_headlen" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe68fed60, "pci_select_bars" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0xb8212341, "timecounter_cyc2time" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0xe6478472, "_dev_info" },
	{ 0x6cfa9591, "__hw_addr_unsync_dev" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x21f51fb1, "pci_enable_msix_range" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x709bd92f, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9644e087, "skb_checksum_help" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x9b11153b, "ndo_dflt_fdb_add" },
	{ 0x739eb56e, "pm_schedule_suspend" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xdffe77f8, "ptp_find_pin" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x78c6770, "pci_disable_pcie_error_reporting" },
	{ 0x317e3194, "tcf_block_cb_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
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
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x816a3c16, "i2c_bit_add_bus" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d247875, "pci_vfs_assigned" },
	{ 0x28318305, "snprintf" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x509f625d, "consume_skb" },
	{ 0x4883ab32, "dca_remove_requester" },
	{ 0x6548e55e, "pci_enable_device_mem" },
	{ 0x8ee1b4e5, "__napi_alloc_skb" },
	{ 0x433ee4cd, "skb_tstamp_tx" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7d34246b, "pci_wake_from_d3" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x48132457, "pci_release_selected_regions" },
	{ 0x2ca6809b, "pci_request_selected_regions" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x62a67793, "i2c_new_device" },
	{ 0xb0734f0, "pcie_capability_write_word" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x2b2c7479, "tcf_block_cb_register" },
	{ 0xeb9faa8b, "__skb_pad" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
	{ 0xf6e09477, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dca,i2c-algo-bit";

MODULE_ALIAS("pci:v00008086d00001F40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001539sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001536sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001537sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001538sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000157Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000157Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001521sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001522sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001523sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001524sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001527sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001510sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001516sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000438sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000043Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000043Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001518sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001526sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010D6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1EC80C523906E4B25DE4295");
MODULE_INFO(rhelversion, "8.0");
