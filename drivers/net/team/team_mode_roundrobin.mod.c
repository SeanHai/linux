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
	{ 0x4e64a784, "team_modeop_port_change_dev_addr" },
	{ 0x73d9ed29, "team_modeop_port_enter" },
	{ 0x4da9eb53, "team_mode_unregister" },
	{ 0x9e832fa1, "team_mode_register" },
	{ 0xb9d6c40f, "netpoll_send_skb_on_dev" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=team";


MODULE_INFO(srcversion, "707F6A7895F7C7EBE8D9D5E");
MODULE_INFO(rhelversion, "8.0");
