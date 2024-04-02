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
	{ 0x3eeb2322, "__wake_up" },
	{ 0xe6478472, "_dev_info" },
	{ 0xe3781dac, "i2c_pca_add_numbered_bus" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0x4cf09b5c, "device_property_read_u32_array" },
	{ 0x62e2909, "devm_gpiod_get_optional" },
	{ 0x28318305, "snprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8d4abd8, "devm_ioremap_resource" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd69e6e56, "gpiod_set_value" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-algo-pca";


MODULE_INFO(srcversion, "FA025E5D97286A0D9452208");
MODULE_INFO(rhelversion, "8.0");
