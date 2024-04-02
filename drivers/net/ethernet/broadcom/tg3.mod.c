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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x2652b43c, "netdev_update_features" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0x5eb49f1a, "netdev_notice" },
	{ 0x21f51fb1, "pci_enable_msix_range" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x6fc35b59, "netif_set_real_num_rx_queues" },
	{ 0x4b7a9f7d, "netif_set_real_num_tx_queues" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x318f7969, "add_timer" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2b259a46, "hwmon_device_unregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x77e23d0, "__skb_gso_segment" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xa816dfec, "skb_copy" },
	{ 0xe548f5fe, "skb_clone_tx_timestamp" },
	{ 0xfad0a7f6, "skb_copy_expand" },
	{ 0x9644e087, "skb_checksum_help" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xb621d8c9, "netif_schedule_queue" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x433ee4cd, "skb_tstamp_tx" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xe98d105f, "build_skb" },
	{ 0x1fe912f1, "netdev_alloc_frag" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0x509f625d, "consume_skb" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x27e1a049, "printk" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xb8c8d6d0, "ptp_clock_register" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x8c69e82c, "pci_ioremap_bar" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x1d61bf97, "phy_attached_info" },
	{ 0x1458d3d0, "phy_connect" },
	{ 0x85a49dc7, "pci_vpd_find_info_keyword" },
	{ 0xf1361941, "pci_vpd_find_tag" },
	{ 0x36508a4d, "pci_get_slot" },
	{ 0xf6e09477, "pcie_capability_read_word" },
	{ 0xdb35a6a2, "__mdiobus_register" },
	{ 0x63b49316, "mdiobus_alloc_size" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0xafbe9d9d, "pci_find_capability" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x65092c1a, "phy_disconnect" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x630630ad, "ptp_clock_unregister" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xe4697f5a, "phy_ethtool_ksettings_set" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xb0734f0, "pcie_capability_write_word" },
	{ 0x47a88059, "pcie_capability_clear_and_set_word" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x29928ef8, "pci_device_is_present" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2e2b40d2, "strncat" },
	{ 0x754d539c, "strlen" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf7d6636f, "current_task" },
	{ 0xc9004247, "pci_read_vpd" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x1805fa7, "phy_ethtool_ksettings_get" },
	{ 0x55087ce6, "mdiobus_free" },
	{ 0x111e391, "mdiobus_unregister" },
	{ 0x3169a670, "phy_stop" },
	{ 0x383706a5, "phy_start" },
	{ 0x259a6d0a, "phy_start_aneg" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x91715312, "sprintf" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x7772a653, "hwmon_device_register_with_groups" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x2b1344fe, "phy_mii_ioctl" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x7a1144e8, "device_set_wakeup_capable" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf7b182b1, "ptp_clock_index" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x28318305, "snprintf" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x7d34246b, "pci_wake_from_d3" },
	{ 0xa622d224, "dev_close" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x15af7f4, "system_state" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x98cb7f38, "mdiobus_get_phy" },
	{ 0xfb578fc5, "memset" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x58388972, "pv_lock_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000014E4d00001644sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001645sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001647sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001648sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001653sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001654sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001696sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001649sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001659sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001676sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001677sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016FDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016FEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001672sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001673sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001674sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001693sv000017AAsd00003056bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001693sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001668sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001669sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001678sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001679sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001712sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001713sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001698sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001684sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001688sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001689sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001699sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv00001025sd00000601bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv00001025sd00000612bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001690sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001694sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001691sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001655sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001665sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001656sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001657sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001687sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001643sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001642sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001683sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001641sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00001645sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CFd000011A2sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "991D83240FC1274B04C6EB4");
MODULE_INFO(rhelversion, "8.0");
