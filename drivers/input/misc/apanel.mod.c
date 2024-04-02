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
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xedc03953, "iounmap" },
	{ 0x27e1a049, "printk" },
	{ 0x2a303d4d, "check_signature" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0x3df9e726, "input_register_polled_device" },
	{ 0x1c504203, "input_allocate_polled_device" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xfe7843b, "input_event" },
	{ 0x33d51101, "i2c_smbus_read_word_data" },
	{ 0x31825d44, "i2c_smbus_write_word_data" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x3ed5b2b6, "input_free_polled_device" },
	{ 0xefed9dd7, "input_unregister_polled_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=input-polldev";

MODULE_ALIAS("i2c:fujitsu_apanel");

MODULE_INFO(srcversion, "6055BFE13433EF91C6D355A");
MODULE_INFO(rhelversion, "8.0");
