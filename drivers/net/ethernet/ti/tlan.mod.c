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
	{ 0x6dc87645, "param_array_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x7d34246b, "pci_wake_from_d3" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xfb578fc5, "memset" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xeb9faa8b, "__skb_pad" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x318f7969, "add_timer" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x38a7735c, "netdev_info" },
	{ 0x27e1a049, "printk" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00000E11d0000AE34sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000AE32sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000AE35sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000F130sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000F150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000AE43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000AE40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000108Dd00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000108Dd00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000108Dd00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B012sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4DCDD1883D7B37D443E6904");
MODULE_INFO(rhelversion, "8.0");
