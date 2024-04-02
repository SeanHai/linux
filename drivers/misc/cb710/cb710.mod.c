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
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0xd5184fc1, "pcim_iomap_table" },
	{ 0x36508a4d, "pci_get_slot" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xfb578fc5, "memset" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x8fc50580, "sg_miter_next" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0xe6478472, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x593216c9, "platform_device_register" },
	{ 0xcad615e2, "devm_free_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x9a983107, "ida_remove" },
	{ 0x69acdf38, "memcpy" },
	{ 0x44e60b26, "ida_pre_get" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x9fed5c45, "ida_get_new_above" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0x32178f3f, "ida_destroy" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0x27a0b904, "platform_device_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001524d00000510sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "350BAAB4D11DFC1858BE8BC");
MODULE_INFO(rhelversion, "8.0");
