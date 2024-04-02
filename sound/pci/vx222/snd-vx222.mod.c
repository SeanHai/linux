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
	{ 0xf9a482f9, "msleep" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x6f642f66, "snd_vx_resume" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xfcdcb687, "snd_vx_dsp_boot" },
	{ 0xf2e3256a, "snd_vx_dsp_load" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x110918bb, "snd_device_new" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa5f17b9e, "snd_vx_suspend" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x88299080, "snd_vx_create" },
	{ 0xf1f04d23, "snd_vx_irq_handler" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x226138b0, "snd_vx_threaded_irq_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x5e74f55f, "snd_vx_setup_firmware" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-vx-lib,snd";

MODULE_ALIAS("pci:v000010B5d00009050sv00001369sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv00001369sd*bc*sc*i*");

MODULE_INFO(srcversion, "BBAD1B70EBCF98EC33F6CC4");
MODULE_INFO(rhelversion, "8.0");
