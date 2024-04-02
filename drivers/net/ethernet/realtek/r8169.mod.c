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
	{ 0x9efab5ee, "ethtool_op_get_ts_info" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xeb9faa8b, "__skb_pad" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8ee1b4e5, "__napi_alloc_skb" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0xc92c8805, "pci_free_irq" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9644e087, "skb_checksum_help" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x433ee4cd, "skb_tstamp_tx" },
	{ 0xe548f5fe, "skb_clone_tx_timestamp" },
	{ 0x77e23d0, "__skb_gso_segment" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x8a08e0dc, "pci_request_irq" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x55f5019b, "__kmalloc_node" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x6e4edad6, "pci_clear_master" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x7d34246b, "pci_wake_from_d3" },
	{ 0x15af7f4, "system_state" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x27e1a049, "printk" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xe6478472, "_dev_info" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xf0191bff, "dmam_alloc_attrs" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xd5184fc1, "pcim_iomap_table" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0xe68fed60, "pci_select_bars" },
	{ 0x5bfafb14, "pcim_set_mwi" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0x96393c2a, "pci_disable_link_state" },
	{ 0x5c004075, "devm_alloc_etherdev_mqs" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0xc6572c74, "__pm_runtime_idle" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0x7c17fb39, "pci_dev_run_wake" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x4604d0c3, "netif_napi_del" },
	{ 0x3dc1e6f6, "netdev_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x47a88059, "pcie_capability_clear_and_set_word" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5eb49f1a, "netdev_notice" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x2652b43c, "netdev_update_features" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0x1c6ec503, "__napi_schedule_irqoff" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xed8c0cf9, "mii_ethtool_get_link_ksettings" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbb7845aa, "mii_nway_restart" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x739eb56e, "pm_schedule_suspend" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v000010ECd00008129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008167sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010FFd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008169sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000C107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ECd00000116sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001032sv*sd00000024bc*sc*i*");
MODULE_ALIAS("pci:v00000001d00008168sv*sd00002410bc*sc*i*");

MODULE_INFO(srcversion, "1E60506EAE4F9AE11D6E4D4");
MODULE_INFO(rhelversion, "8.0");
