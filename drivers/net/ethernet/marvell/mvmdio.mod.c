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
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xdb35a6a2, "__mdiobus_register" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x92e39ee2, "devm_ioremap" },
	{ 0x28318305, "snprintf" },
	{ 0x5e0681a6, "devm_mdiobus_alloc_size" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x111e391, "mdiobus_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmarvell,orion-mdio");
MODULE_ALIAS("of:N*T*Cmarvell,orion-mdioC*");
MODULE_ALIAS("of:N*T*Cmarvell,xmdio");
MODULE_ALIAS("of:N*T*Cmarvell,xmdioC*");

MODULE_INFO(srcversion, "03F5E1F82BDCE0B110940CC");
MODULE_INFO(rhelversion, "8.0");
