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
	{ 0x123130e4, "param_get_uint" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xe3052907, "mISDNisac_irq" },
	{ 0x676434b5, "mISDNisar_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x677412db, "sev_enable_key" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x6dbad168, "param_set_uint" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x1497ce1b, "mISDN_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x5eeee198, "mISDN_register_device" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5eba9410, "__request_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xb0fb338f, "mISDNisar_init" },
	{ 0xd7a3499f, "mISDNisac_init" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x28318305, "snprintf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x27e1a049, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mISDNipac,mISDNisar,mISDN_core";

MODULE_ALIAS("pci:v0000E159d00000002sv00000051sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v0000E159d00000002sv00000054sd00000001bc*sc*i*");

MODULE_INFO(srcversion, "9140D34876AC18BF26E20F6");
MODULE_INFO(rhelversion, "8.0");
