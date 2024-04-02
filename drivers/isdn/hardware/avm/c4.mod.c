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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x4403fcf, "unregister_capi_driver" },
	{ 0x9f823278, "register_capi_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x349cba85, "strchr" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8f699913, "capilib_release" },
	{ 0xcde1026b, "capilib_data_b3_conf" },
	{ 0xc245ca28, "capi_ctr_ready" },
	{ 0xf98beda4, "b1_parse_version" },
	{ 0xb0ad34ee, "capilib_new_ncci" },
	{ 0xfdedc137, "capi_ctr_handle_message" },
	{ 0xe0046acc, "capi_ctr_suspend_output" },
	{ 0xada907a4, "capilib_free_ncci" },
	{ 0xe84ffd66, "capi_ctr_resume_output" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x32608e68, "attach_capi_ctr" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x5eba9410, "__request_region" },
	{ 0x43f1a1e3, "avmcard_dma_alloc" },
	{ 0x32623162, "b1_alloc_card" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x251056eb, "capi_ctr_down" },
	{ 0x55c74181, "b1_free_card" },
	{ 0x94f876b0, "avmcard_dma_free" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7523c54e, "detach_capi_ctr" },
	{ 0xbd178539, "capilib_release_appl" },
	{ 0xf5eee0a4, "capilib_data_b3_req" },
	{ 0x27e1a049, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x91715312, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,b1";

MODULE_ALIAS("pci:v00001011d00001065sv00001244sd00000800bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00001065sv00001244sd00001100bc*sc*i*");

MODULE_INFO(srcversion, "027BFC773C685FF7BC8BAC3");
MODULE_INFO(rhelversion, "8.0");
