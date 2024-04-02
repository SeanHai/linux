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
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0xeb9faa8b, "__skb_pad" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xa622d224, "dev_close" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x28318305, "snprintf" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x91715312, "sprintf" },
	{ 0x754d539c, "strlen" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xb621d8c9, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x509f625d, "consume_skb" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5eb49f1a, "netdev_notice" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x3dc1e6f6, "netdev_printk" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xafbe9d9d, "pci_find_capability" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x7d34246b, "pci_wake_from_d3" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfb578fc5, "memset" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x27e1a049, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010B7d00001700sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d000080EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004B01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004C00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001371d0000434Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001032sv*sd00000015bc*sc*i*");

MODULE_INFO(srcversion, "504E9F1C20054428F35DB45");
MODULE_INFO(rhelversion, "8.0");
