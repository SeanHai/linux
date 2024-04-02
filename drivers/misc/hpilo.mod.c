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
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xa047947, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4c89f920, "cdev_del" },
	{ 0x5e87e75, "device_destroy" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2df52479, "device_create" },
	{ 0xe5e29cae, "cdev_add" },
	{ 0x6a8db397, "cdev_init" },
	{ 0xf10de535, "ioread8" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xdc9c6226, "pci_iomap_range" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x37a0cba, "kfree" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0x848d372e, "iowrite8" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00000E11d0000B204sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003307sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "ADF1658FC6C1AF692E35EA0");
MODULE_INFO(rhelversion, "8.0");
