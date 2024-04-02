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
	{ 0x5eba9410, "__request_region" },
	{ 0x5b5452cf, "parport_ieee1284_ecp_write_data" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0x10f60216, "parport_ieee1284_ecp_write_addr" },
	{ 0x6259c6f1, "parport_register_port" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xcaba6cc4, "parport_remove_port" },
	{ 0x677412db, "sev_enable_key" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x53e840eb, "parport_ieee1284_epp_write_addr" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x8d710940, "pci_match_id" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x5bb4346e, "platform_bus_type" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xbadf500d, "pnp_unregister_driver" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x184a1032, "parport_ieee1284_epp_write_data" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x90cdedf3, "parport_ieee1284_write_compat" },
	{ 0xb683a3ad, "parport_announce_port" },
	{ 0x5a921311, "strncmp" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x22c8110d, "pnp_register_driver" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf92921f, "parport_ieee1284_epp_read_addr" },
	{ 0xd5c7e620, "pnp_get_resource" },
	{ 0xe6478472, "_dev_info" },
	{ 0xab600421, "probe_irq_off" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5e3a3912, "parport_irq_handler" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0x37a0cba, "kfree" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x39ecd774, "pci_get_device" },
	{ 0xa274f52b, "parport_ieee1284_read_byte" },
	{ 0x1323d580, "parport_ieee1284_read_nibble" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf4a05c0e, "parport_del_port" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5cb4a47c, "parport_ieee1284_epp_read_data" },
	{ 0xfccae263, "parport_ieee1284_ecp_read_data" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport";

MODULE_ALIAS("pnp:dPNP0400*");
MODULE_ALIAS("acpi*:PNP0400:*");
MODULE_ALIAS("pnp:dPNP0401*");
MODULE_ALIAS("acpi*:PNP0401:*");
MODULE_ALIAS("pci:v00001106d00000686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00008231sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001283d00008872sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00001021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000131Fd00002021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001407d00008800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv0000D84Dsd00004014bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000101bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000102bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000103bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00000104bc*sc*i*");
MODULE_ALIAS("pci:v00001409d00007268sv00001409sd00009018bc*sc*i*");
MODULE_ALIAS("pci:v00001592d00000782sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001592d00000783sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014D2d00008001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DBd00002121sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d00009523sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d00009513sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d00008403sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C110sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C114sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C118sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001415d0000C11Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000416Cd00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F2d00000121sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009705sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009715sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009755sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009815sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009901sv0000A000sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009865sv0000A000sd00001000bc*sc*i*");
MODULE_ALIAS("pci:v00009710d00009865sv0000A000sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000135Cd00000278sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C00d00003050sv00001C00sd00003050bc*sc*i*");

MODULE_INFO(srcversion, "00A2CEC556ED8EA2077E24B");
MODULE_INFO(rhelversion, "8.0");
