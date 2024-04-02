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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x51bd3af4, "dcb_ieee_setapp" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x30aada06, "rhashtable_walk_exit" },
	{ 0x94b8945c, "rht_bucket_nested" },
	{ 0xdf7e4b04, "pci_enable_sriov" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x349cba85, "strchr" },
	{ 0xa9fa2aec, "dcb_ieee_delapp" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x3ae9232c, "__skb_flow_dissect" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x7b7c3a6b, "rhashtable_walk_next" },
	{ 0x9b79a4f0, "napi_hash_del" },
	{ 0xe068f686, "xdp_rxq_info_reg" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xb2e50c4f, "netdev_set_num_tc" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xa99b39c2, "prandom_bytes" },
	{ 0xfc33ccad, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x3398015f, "metadata_dst_alloc" },
	{ 0xd2b2f577, "tcp_gro_complete" },
	{ 0xd48c7500, "pci_disable_sriov" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xee8b874e, "xdp_rxq_info_unreg" },
	{ 0x7e5ad7b2, "pcie_print_link_status" },
	{ 0xe9b75d22, "call_netdevice_notifiers" },
	{ 0xcf5138ca, "bpf_prog_add" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x2f910e3c, "devlink_alloc" },
	{ 0x999e8297, "vfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x821aac91, "neigh_destroy" },
	{ 0xf8a1a016, "netdev_reset_tc" },
	{ 0x29f9517f, "rps_may_expire_flow" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x91715312, "sprintf" },
	{ 0xda000aa, "rhashtable_insert_slow" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x8cac8c08, "free_cpumask_var" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x3b3cbe6, "rhashtable_destroy" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1cc30c3e, "netdev_set_tc_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xb621d8c9, "netif_schedule_queue" },
	{ 0xb1ba6720, "rht_bucket_nested_insert" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xdba47dbc, "pci_enable_pcie_error_reporting" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0xc2fb064b, "flow_keys_dissector" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x2e2b40d2, "strncat" },
	{ 0x9902e936, "rhashtable_walk_stop" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xb6a9f7d, "rhashtable_walk_start_check" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xcd279169, "nla_find" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x525c1ee, "zalloc_cpumask_var" },
	{ 0x9ed2ac08, "netif_receive_skb" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa622d224, "dev_close" },
	{ 0x6fc35b59, "netif_set_real_num_rx_queues" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x4b7a9f7d, "netif_set_real_num_tx_queues" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9a910d01, "simple_open" },
	{ 0x50c60211, "alloc_cpu_rmap" },
	{ 0xc8a91f5b, "cpumask_local_spread" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb5848bae, "__iowrite32_copy" },
	{ 0x810be09, "free_irq_cpu_rmap" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xe98d105f, "build_skb" },
	{ 0xb73195eb, "xdp_rxq_info_is_reg" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe0a4e6ce, "eth_get_headlen" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x12a38747, "usleep_range" },
	{ 0x21f51fb1, "pci_enable_msix_range" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x709bd92f, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xbb309ec5, "switchdev_port_same_parent_id" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8c69e82c, "pci_ioremap_bar" },
	{ 0x9355cb62, "rhashtable_walk_enter" },
	{ 0x44dd64d9, "ip_route_output_flow" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x5db88162, "rhashtable_init" },
	{ 0x8b5b25c8, "irq_cpu_rmap_add" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x78c6770, "pci_disable_pcie_error_reporting" },
	{ 0xddcb57de, "devlink_free" },
	{ 0x317e3194, "tcf_block_cb_unregister" },
	{ 0x1640fed1, "devlink_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x77201499, "skb_add_rx_frag" },
	{ 0x4d0723e6, "pci_num_vf" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x8a43b6a3, "ndo_dflt_bridge_getlink" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x73c2554f, "__iowrite64_copy" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d247875, "pci_vfs_assigned" },
	{ 0x28318305, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x509f625d, "consume_skb" },
	{ 0x2652b43c, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8ee1b4e5, "__napi_alloc_skb" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x7d34246b, "pci_wake_from_d3" },
	{ 0x263074f8, "irq_set_affinity_hint" },
	{ 0xcab97d75, "devlink_unregister" },
	{ 0x7a1144e8, "device_set_wakeup_capable" },
	{ 0xdd5fc59d, "bpf_prog_put" },
	{ 0xa063d0db, "pci_find_ext_capability" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x2b2c7479, "tcf_block_cb_register" },
	{ 0xeb9faa8b, "__skb_pad" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0xdc34a927, "__tracepoint_xdp_exception" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=devlink";

MODULE_ALIAS("pci:v000014E4d00001604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001614sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016ECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000D802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000D804sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001609sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000D800sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "27D8F52961AC9A5F96D7E6A");
MODULE_INFO(rhelversion, "8.0");
